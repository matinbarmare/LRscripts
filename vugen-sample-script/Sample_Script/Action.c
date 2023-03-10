Action()
{
	int rNum;
	
	double MilliFactor = 50.123;
	int factor = 1;
	int factor3 = 1;
	
//	if(atoi(lr_eval_string("{iterNumParam}")) == 1) {
//		lr_rendezvous("allHere");
//	   	lr_message ("Started at: [%ld]", time(&starttime));
//	   	//lr_force_think_time(rand()%30 + 5);
//	}
	
	
	RThinkTime = 900 + rand()%250;
	RThinkTime = RThinkTime / 1000.01;
	//Safety for LG CPU
	RThinkTime = (MAX(transcount,75)/75.00)*RThinkTime;
	
	lr_message("RThinkTime ===== %g",RThinkTime);
	
//	lr_abort();
	
	lr_message("Delay ===== %d",delay);
	lr_message("Reset ===== %d",reset);
	lr_message("anomalyrandom===== %d",anomalyrandom);
	
	lr_message ("Now is: [%ld]", time(&currenttime));
	
	timediff = currenttime-starttime;
	lr_message ("timediff: [%d]", timediff);
	
	if (timediff > delay) {
		factor=4;	
	}
	
	if (timediff > delay+reset) {
		factor = 1;
		factor3 = 1;
		starttime=currenttime;
		delay=rand()%randdelay+basedelay;
    	reset=rand()%randdelay+basereset;
    	lr_message("delay %d",delay);
    	lr_message("reset %d",reset);
		lr_save_datetime("%S", DATE_NOW, "currSeconds");  
    	anomalyrandom=(atoi(lr_eval_string("{currSeconds}"))/10)+4;
    	lr_user_data_point("DataPoint01",delay);
	    lr_user_data_point("DataPoint02",reset);
	}

// web page download simulation

	lr_user_data_point("tcp_connect", 2);			// new connections
	lr_user_data_point("tcp_connection_count", 1);	// currently open connections
	lr_user_data_point("mic_recv", ((rand() % 50000 + 1024000))/factor);			// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 3/factor);				// successful responses
	lr_user_data_point("HTTP_304", 1);				// not modified responses
	lr_user_data_point("HTTP_404", 1);				// error responses
	lr_user_data_point("HTTP_302", 1);				// redirection responses
	lr_user_data_point("tcp_shutdown", 1);			// closed connections

// -------------------------------------------------------------------------------

	mystime = 1*MilliFactor/scale + (rand()%251)/scale;
	if (factor==3) factor3=rand()%3+1;
	factor3 = factor;
	transtime = factor3*mystime;
	lr_message("Landing Page ===== %g", transtime);
	
	//###
	lr_set_transaction("Landing Page",transtime, LR_PASS);
	
    if (factor==3) factor3=rand()%3+1;
    factor3 = factor;
	mystime = 2*MilliFactor/scale + (rand()%251)/scale;
    transtime = factor3*mystime;
	lr_message("Sign In ===== %g", transtime);
   
 	lr_user_data_point("DataPoint03", atoi(lr_eval_string("{UserDataValue}")));
	//###
	lr_set_transaction("Sign In",transtime, LR_PASS);
	
	lr_think_time(RThinkTime);

	mystime = 3*MilliFactor/scale + (rand()%251)/scale;
   
	lr_user_data_point("DataPoint04", atoi(lr_eval_string("{UserDataValue}")));

	lr_user_data_point("tcp_connect", 2);			// new connections
	lr_user_data_point("tcp_connection_count", 0);	// currently open connections
	lr_user_data_point("mic_recv", ((rand() % 50000 + 1024000))/factor);			// downloaded bytes (throughput);
	lr_user_data_point("HTTP_200", 20/factor);				// successful responses
	lr_user_data_point("HTTP_304", 1/factor);				// not modified responses
	lr_user_data_point("HTTP_404", 1/factor);				// error responses
	lr_user_data_point("HTTP_302", 1/factor);				// redirection responses
	lr_user_data_point("tcp_shutdown", 3);			// closed connections

	

// -------------------------------------------------------------------------------

	ITERATION_NUM++;

	// report Error message every random iterations
	rNum = rand() % randerror + 10;
	if(ITERATION_NUM % rNum == 0) 
	{
		lr_start_transaction("Search product");
		
		lr_user_data_point("HTTP_500", factor);				// error responses
		lr_error_message("Demo Error message on Iteration %s; UserID:%d", lr_eval_string("{iterNumParam}"),nUserIndex);
		lr_end_transaction("Search product",LR_FAIL);
	}
	else {
		
		
		if (factor==3) factor3=rand()%3+1;
		factor3 = factor;
		transtime = factor3*mystime;
		//lr_message("Sample_Transaction_03 ===== %g", transtime);
		//###
		lr_set_transaction("Search product",transtime, LR_PASS);
	}

	mystime = 4*MilliFactor/scale + (rand()%251)/scale;
	//if (factor==3) factor3=rand()%3+1;
	//transtime = factor3*mystime;
	transtime = mystime;
	lr_message("Choose product ===== %g", transtime);
	
	//###
	lr_set_transaction("Choose product",transtime, LR_PASS);
	
	mystime = 5*MilliFactor/scale + (rand()%251)/scale;
	//if (factor==3) factor3=rand()%3+1;
	//transtime = factor3*mystime;
	transtime = mystime;
	lr_message("Select color ===== %g", transtime);
	
	//###
	lr_set_transaction("Select color",transtime, LR_PASS);
	
	lr_think_time(RThinkTime);
	
	//Set random transaction between TRANS_06 and TRANS_<transcount>
	
	//IterTransNum=(rand()%(transcount-5))+6;
	
	lr_set_transaction("Add to cart", 1, LR_PASS);
	lr_set_transaction("Proceed to checkout", 1, LR_PASS);
	lr_set_transaction("Shipping options", 1, LR_PASS);
	lr_set_transaction("Place order", 1, LR_PASS);
	lr_set_transaction("Log Out", 1, LR_PASS);

	
	for(IterTransNum=6;IterTransNum<11;IterTransNum++){
			
			mystime = IterTransNum*MilliFactor/scale + (rand()%50)/scale;
			
			
			switch(IterTransNum) {
		    	case 6: lr_save_string( "Add to cart","TransName");
		        break;
		    	case 7: lr_save_string("Proceed to checkout", "TransName");
		        break;
		    	case 8: lr_save_string( "Shipping options","TransName" );
		        break;
		        case 9: lr_save_string( "Place order","TransName" );
		        break;
		        case 10: lr_save_string( "Log Out","TransName" );
		        break;
		    }
	
			
			//lr_param_sprintf( "TransName", "Sample_Transaction_%02d",IterTransNum++);
			
			//if (IterTransNum > 10) IterTransNum=6;
			// web page download simulation
			
			lr_user_data_point("tcp_connect", 2);			// new connections
			lr_user_data_point("tcp_connection_count", 1);	// currently open connections
			
			lr_user_data_point("HTTP_304", 1/factor);				// not modified responses
			lr_user_data_point("HTTP_404", 1/factor);				// error responses
			lr_user_data_point("HTTP_302", 1/factor);				// redirection responses
			lr_user_data_point("tcp_shutdown", 1);			// closed connections
			
			// -------------------------------------------------------------------------------
			
			lr_message("anomalyrandom===== %d",anomalyrandom);
			//anomaly on a different set of transactions each period
		//	if (IterTransNum%anomalyrandom == 0) {
		//		transtime = factor*mystime;
		//		lr_user_data_point("mic_recv", (rand() % 50000 + 1024000)/factor);			// downloaded bytes (throughput);
		//		lr_user_data_point("HTTP_200", 20/factor);				// successful responses
		//		lr_user_data_point("HTTP_404", 1/factor);
		//		lr_user_data_point("tcp_connect", factor*2);			// new connections
		//		lr_user_data_point("tcp_connection_count", factor);	// currently open connections
		//		lr_user_data_point("tcp_shutdown", factor);			// closed connections
		//	}
		//	else {
				transtime = mystime;
				lr_user_data_point("mic_recv", (rand() % 50000 + 1024000)/factor);			// downloaded bytes (throughput);
				lr_user_data_point("HTTP_200", 20/factor);				// successful responses
				lr_user_data_point("tcp_connect", 2);			// new connections
				lr_user_data_point("tcp_connection_count", 0);	// currently open connections
				lr_user_data_point("tcp_shutdown", 3);			// closed connections
			//}
			
			lr_message("%s ===== %g",lr_eval_string("{TransName}"), transtime);
			//###
			lr_set_transaction(lr_eval_string("{TransName}"),transtime, LR_PASS);
			
	}
			
	lr_message("Delay ===== %d",delay);
	lr_message("Reset ===== %d",reset);
	lr_message("anomalyrandom===== %d",anomalyrandom);
	
	lr_user_data_point("DataPoint05", 300);	

	lr_force_think_time(2);
	lr_think_time(RThinkTime);
	
	return 0;
}