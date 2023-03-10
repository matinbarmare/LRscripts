vuser_init()
{
    os = (char *) getenv("OS");
    lr_message("=======================================================================================================================");
    if (os != NULL) {
    	lr_message("Running on Windows LG");
        scale = 1;
        }
    else {
        lr_message("Running on Linux LG");
        scale = 1000;
    }


	transcount=10;
	basedelay=600;
	randdelay=60;
	basereset=15;
	randerror=25;
	

    scale = 1000.00;
    //stime = stime/scale;   
    
    lr_whoami (&nUserIndex, &vuser_group, NULL) ;
    
    srand(time(NULL)+nUserIndex*10);
    
    
    delay=rand()%randdelay+basedelay;
    reset=rand()%randdelay+basereset;
   
	
	
	//anomalyrandom=rand()%10 + 3; 
	lr_save_datetime("%S", DATE_NOW, "currSeconds");  
    anomalyrandom=(atoi(lr_eval_string("{currSeconds}"))/10)+4;
    
    //IterTransNum=6;
	
	return 0;
}
