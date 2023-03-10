Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_max_html_param_len("476");

	web_url("l1m-chain256.cer", 
		"URL=http://aia.entrust.net/l1m-chain256.cer", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);



	/*web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=107", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);*/

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);
	
	
	lr_continue_on_error (1);
	
	
	
	 web_reg_save_param_ex(
        "ParamName=redirect_url",
        "LB=<a href\=\"",
        "RB=\">Provider",
        LAST);
	lr_think_time(5);
	
	web_url("sales-dashboard",
		"URL={baseURL}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_convert_param("URL","SourceString={redirect_url}","SourceEncoding=HTML","TargetEncoding=PLAIN",LAST);
	
	 lr_continue_on_error (0);
	 
	 lr_log_message(lr_eval_string("URL parameter={URL}"));
	 
	web_reg_save_param("token","LB=<form method=\"POST\" action=\"/as/","RB=/resume/as/authorization.ping\"",LAST);
	
	/*Correlation comment - Do not change!  Original value='eyJ6aXAiOiJERUYiLCJhbGciOiJkaXIiLCJlbmMiOiJBMTI4Q0JDLUhTMjU2Iiwia2lkIjoiNHVDUjVfY0lraUU2R2FSZWtnaWJjWTZPQmJrIiwic3VmZml4IjoidHNSZENWLjE2Njc5MDExMzAifQ..Ea4W5LjgCoNEQ0BDi2kcag.3V_TmxngAWzYoeJ5AKtt_GNzJ9aKJTCh8_ZaeVukpCFH5ZHvEyckjdoZFsXS-sAART1ch9FioWjpjqwgKIKkD1XALMVuIZiCLiJ0sTVcdQnqa-HVE2uSzcJiBFNMH72zhbYkKKa0Lcue2-D1BpHI_A.GZtEUDitY0BxcudwwB8uCg' Name ='state' Type ='ResponseBased'*/

	
	
	
	web_url("authorization.oauth2",
		"URL={URL}"
		"vnd_pi_application_name=secure.rewards.qa.oldmutual.co.za",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://secure.rewards.qa.oldmutual.co.za/",
		"Snapshot=t4.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=../assets/oldmutual/content/img/header_shadow.png", "Referer=https://sso.qa.oldmutual.co.za/", ENDITEM,
		"URL=../favicon.ico", "Referer=https://sso.qa.oldmutual.co.za/", ENDITEM,
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTA3LjAuNTMwNC44OBIXCTxLHmlx2asHEgUNy5myIxIFDb5JoHs=?alt=proto", ENDITEM,
		LAST);

	lr_think_time(1);
	/*web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\t>Z\\xA78\\xE7\\x94\\x80u\\x10\\x0B\\x1A\\x95\\x17\\x08\\xD8\\xB1\\xE6\\x9A\\x06\\x12\\x10107.0.5304.88-64\\x18\\xD0\\xBB\\xDF\\x9A\\x06\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.190442\\xA0\\x02\n\\x06x86_64\\x10\\xEA}\\x18\\x80\\x80\\xBC\\x9B\\xDE\\xFF\\x1F\"\rLatitude 5520(\\x010\\x80\\x0C8\\xE0\\x06B\\x87\\x01\\x08\\x86\\x81\\x02\\x10\\xC9\\xB4\\x02\\x1A\r31.0.101.32512\\x13Google Inc. (Intel):YANGLE (Intel, Intel(R) Iris(R) Xe Graphics Direct3D11 vs_5_0 ps_5_0, "
		"D3D11-31.0.101.3251)Mw\\xC4\rCU\\xEEf\rCe\\x00\\x00\\xA0?j\\x16\n\\x0CGenuineIntel\\x10\\xC1\\x8D \\x18\\x08 \\x00\\x82\\x01\\x02\\x08\\x00\\x8A\\x01\\x02\\x08\\x00\\xAA\\x01\\x06x86_64\\xB0\\x01\\x01\\xCA\\x01,\n\tDell Inc.\\x12\\x060287X3\\x1A\tDell Inc.\"\nDELL   - 2(\\x00J\n\r\\xA5h\\xD2R\\x15\\xA5\\xEB\\xC33J\n\r\\xFB\\xE0\\x8C\\x07\\x15\\x80\\x8D}\\xCAJ\n\r\\xB2\\x9C1\\xDF\\x15\\x80\\x8D}\\xCAJ\n\rH\\xDDd\\xC2\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x1D\\x99\\xF7{\\x15Z\\xE5{7J\n\r\\x83w}"
		">\\x15\\xB0N\\xD6\\xCEJ\n\r\\x00\\xB5\\xAC\\x13\\x15\\x80\\x8D}\\xCAJ\n\r/d\\x1AN\\x15Z\\xE5{7J\n\r\\xF8h2'\\x15\\xC6U7iJ\n\r\\xCBK\\xE6\\xE9\\x15F\\xD6\\xFABJ\n\r!(>\\x01\\x15\\x1C\\xA4TkJ\n\r\\x82\r\\xDD\\xED\\x15\\xE9\\xED#wJ\n\r\\xF4\\x9F\\x87S\\x15Z\\xE5{7J\n\r\\xE4\\xA7i\\x1B\\x15Z\\xE5{7J\n\r!c\n\\x9A\\x15\\x80\\x8D}\\xCAJ\n\rOt\\x06\\xF4\\x15\\x80\\x8D}\\xCAJ\n\r=^\\x85\\xF2\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xB8\\x1D\\x0C\\x87\\x15\\x80\\x8D}\\xCAJ\n\r3-\\x98\\xBE\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\x98\\xB6\\x01s\\x15Z\\xE5{7J\n\r\\xD6:\\xF3\\x87\\x15\\x80\\x8D}\\xCAJ\n\r\\xB8\\xD7\\xB5\\xAF\\x15\\x80\\x8D}\\xCAJ\n\rG\\xD0\\x98<\\x15Z\\xE5{7J\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r\\x9A\\x7F\\xAD\\xD6\\x15\\xFD\\xF8\\x1F2J\n\r\\xF6\\x05\\x0F\\x0F\\x15\\x80\\x8D}\\xCAJ\n\r\\xF7C\\xE1\\x88\\x15H(\\x9FCJ\n\rP\\xA4\\xB6\\x1B\\x15\\x80\\x8D}\\xCAJ\n\r\\xE9?U\\x9F\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\xFCS\\xB2\\x15\\x83\\x8A\\x92iJ\n\r\\x8B\\xDA\r%\\x15\\x80\\x8D}\\xCAJ\n\r|\n"
		"\\x94\\x1E\\x15\\xBD\\xE7\\x19TJ\n\rw\\xFE\\x1C\\xEF\\x15\\x80\\x8D}\\xCAJ\n\r]\\x85*\\\\\\x15\\x80\\x8D}\\xCAJ\n\rL\\x87IG\\x15\\xA0\\xEFa7J\n\r\\x14@T\\xAB\\x15J\\xD4\\x8A\\x02J\n\rlh\\x8A\\xC9\\x15\\x80\\x8D}\\xCAJ\n\r\\xAF\\xA8\\xF7\\xDB\\x15\\x80\\x8D}\\xCAJ\n\r\\x9F\\xA2M\\x00\\x15\\x80\\x8D}\\xCAJ\n\rL8\\xFD\\xA2\\x15\\x80\\x8D}\\xCAJ\n\r\\xEF\\xD2!\\xE5\\x15\\x80\\x8D}\\xCAJ\n\r/\\xC8\\xBC\\xAB\\x15\\xB0A\\xD9\\x15J\n\r{\\x08\\xB7\\xF8\\x15\\xA2\\xE6\\xED\\x12J\n\r"
		"8\\x1C\\x05\\xFD\\x15\\x80\\x8D}\\xCAJ\n\rWH\\xC0\\xCB\\x15\\x80\\x8D}\\xCAJ\n\rF\\xB4c\\xCD\\x15\\x80\\x8D}\\xCAJ\n\r\r\\xF1\\xF1B\\x15\\x80\\x8D}\\xCAJ\n\rB\\xC5\\xF5\\xF6\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x1A\\xBE\\x94{\\x15\\x80\\x8D}\\xCAJ\n\r`\\xCF\\x84\\x15\\x15\\x80\\x8D}\\xCAJ\n\r\\xC3\\xA2\\xB1\\x81\\x15\\x80\\x8D}\\xCAJ\n\r8\\xF9\\x0Ev\\x15\\x80\\x8D}\\xCAJ\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\x03\\xC9@M\\x15\\xFB\\x9D\"\\x9AJ\n\r.\\x96\\x8F=\\x15\\x80\\x8D}\\xCAJ\n\r0R\\x0C|"
		"\\x15\\x80\\x8D}\\xCAJ\n\r\\x03\\xC5\\xEE\\xBF\\x15\\x90\\x0EpFJ\n\r^Z=H\\x15t\\xED\t\\xC3J\n\rQJI\\x13\\x15\\x80\\x8D}\\xCAJ\n\rCI\\xD7\\x02\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x16?\\xD3?\\x151\\x19\\x1E\\x87J\n\rfs\\xA4+\\x15Z\\xE5{7J\n\r\\xBD?\\x8C$\\x15Z\\xE5{7J\n\rZ\\x98\\x97\\xC2\\x15\\x80\\x8D}\\xCAJ\n\r\"\\x94\\x0C\\xF3\\x15?\\x80\\x9D\\xA7J\n\r\\xA2,\\xA5\\x80\\x15\\x80\\x8D}\\xCAJ\n\r\\x17\\xD1o%\\x15\\x80\\x8D}\\xCAJ\n\r\\xED\\xA6\\x9F\\x82\\x15\\x80\\x8D}\\xCAJ\n\r"
		"5\\x8D\\xE4\\xD3\\x15\\xEC\\x9Ew\\xB4J\n\r\\xDE~~/\\x15\\x80\\x8D}\\xCAJ\n\r\\xEDr\\xBA(\\x15\\x80\\x8D}\\xCAJ\n\r\\x1C\\xCAo\\xD8\\x15\\x80\\x8D}\\xCAJ\n\r\\xDA\\xE9\\x1BZ\\x15\\x80\\x8D}\\xCAJ\n\rm#:^\\x15\\xD0\\x86\\xE2YJ\n\r\\xD9\\xA5t\\xFD\\x15\\xEA^\\x80jJ\n\r\\xED\\x10D\\xC4\\x15\\x80\\x8D}\\xCAJ\n\rd\\xE6\\xDE\\x9B\\x15\\x11\\x18\\x85\\xC8J\n\r\\x0BY\\xBB\\xEA\\x15\\x80\\x8D}\\xCAJ\n\r\\xA6\\xF7N\\x8A\\x15|\\xA3\\xBE\\xCDJ\n\r\\x9A\\x03IS\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xCEFVb\\x15sY\\x8C\\x1FJ\n\r\\xC0\\xDA\\xF0\\xBD\\x15\\x90\\xC5\\xB2\\xDFJ\n\r\\xDF\\xE0\\x90\\xEA\\x15\\x00\\xDE\\xC9\\xA4J\n\r7e\\xEE\\x15\\x15\\x80\\x8D}\\xCAJ\n\r\\xE3\\x84\\x01\\xB3\\x15\\x80\\x8D}\\xCAJ\n\r\\x9At\\xC9\\xB3\\x15\\x80\\x8D}\\xCAJ\n\r<=I\\xDA\\x15\\x80\\x8D}\\xCAJ\n\rB>x\\\\\\x15\\x80\\x8D}\\xCAJ\n\r\\xB3K\\xC5\\xB3\\x15\\xC5HY\\x7FJ\n\r\\xFD\\x1Bq\\x0E\\x15\\x80\\x8D}\\xCAJ\n\rg)\\xC3\\x99\\x15O?OTJ\n\rl\\xA3h<\\x15\\x80\\x8D}\\xCAJ\n\r\\\\\\x8D\\x90Q\\x15Z\\xE5{7J\n\r\\x0C"
		">\\x9D{\\x15\\x80\\x8D}\\xCAJ\n\ro\\xE0\\xF9\\xB3\\x15\\x80\\x8D}\\xCAJ\n\rH\\xA1F\\x06\\x15Z\\xE5{7J\n\r//Z\\x04\\x15\\x80\\x8D}\\xCAJ\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r\\xD8\\xC1II\\x15\\x80\\x8D}\\xCAJ\n\r\\xFC\\x98\\xE0Y\\x15\\x80\\x8D}\\xCAJ\n\r\\x85\\x1C\\xE2\\x9F\\x15z\\x04\\xCE\\xC1J\n\rH)\\x0F:\\x15\\xC7\\x92\\xDCnJ\n\r&HJ\\x8C\\x15\\xA2\\xE6\\xED\\x12J\n\r>\\x08\\xD3\\x15\\x15\\xA2\\xE6\\xED\\x12J\n\r\\x19^\\xB1\\xBD\\x15\\x80\\x8D}\\xCAJ\n\r\\xA2\\x02\\xAF1\\x15\\x80\\x8D}"
		"\\xCAJ\n\r?\\xAA\\x8D\\xEC\\x15\\x80\\x8D}\\xCAJ\n\r\\xEC]\\xBE)\\x152\\xA2\\xD9bJ\n\r\\xAC\\xC4\\x90\\xD9\\x15\\x80\\x8D}\\xCAJ\n\r\\xD3T*\\x07\\x15\\x80\\x8D}\\xCAJ\n\r\\xEAD\\x84\\xA1\\x15\\x16\\x98j&J\n\rG*\\xCA\\xB0\\x15\\x80\\x8D}\\xCAJ\n\rc\\x9A\\xE6\\x06\\x15\\xC7\\x92\\xDCnJ\n\r\\x0B\\xB0{\\x9F\\x15\\xA4q\\xE9\\xF6J\n\r\\xEA\\xA1;\\x86\\x15Z\\xE5{7J\n\r\\xAB\\xDF\\x97z\\x15\\xC7\\x92\\xDCnJ\n\r\\xDA\\xCDJ\\xAD\\x15\\x80\\x8D}\\xCAJ\n\r`\\x87MI\\x15C]2RJ\n\r"
		"*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\r\\xC2s({\\x15\\x1D\\x00K\\xA9J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\xD3\\x01\\x8C\\xF4\\x15n\\xF2xgJ\n\r\\xA3\\xB6\\xDCc\\x15\\x9FU\\x1A\\x93J\n\rF\\xE7\\x06\\xE7\\x15\\xA4-l\\xADJ\n\r\\x0C\\x19\\x96\\xF2\\x15\\x90\\x0F\\xD51J\n\r\\xE2\\xAABD\\x15\\x14\\x0F\\xCC\\xE1J\n\rd\\xCF\\x90\\xF6\\x15v\\x19;nJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15\\xE7\\xFF\\xDFkJ\n\r\\x90?\\x0Cq\\x15<\\xB1\\xF6\\xD7J\n\r"
		"\\x81\\x84\\xB1\\xE2\\x15\\xE7\\xFF\\xDFkJ\n\r\\x89\\x18\\xE7\\xE7\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xB9b{^\\x15\\x80\\x8D}\\xCAJ\n\rm\\x07\\x82\\xAE\\x15\\x80\\x8D}\\xCAJ\n\r\\xF7ZgW\\x15\\x80\\x8D}\\xCAJ\n\r\\x8D\\x8D\r\\x16\\x15\\x80\\x8D}\\xCAJ\n\r\\x8AQ\\xD0\\x01\\x15\\x80\\x8D}\\xCAJ\n\rzZ?\\x7F\\x15\\xA0z,\\xBDJ\n\r\\x1E\\xCB\\xBE\\x06\\x15N\\x1FY,J\n\r\\xA96Sk\\x15\\x80\\x8D}\\xCAJ\n\r\\xB0^_Y\\x15\\x80\\x8D}\\xCAJ\n\rL\\x14\\xAC8\\x15\\x80\\x8D}\\xCAJ\n\r\\x0B\\x1BM/\\x15\\xA8m\\x8DRJ\n\r"
		"\\x18E<v\\x15\\xC9\\x05,\\xCCJ\n\rG(nc\\x15\\x80\\x8D}\\xCAJ\n\r6\\xFF\\xE6\\xF6\\x15\\x80\\x8D}\\xCAJ\n\r\\xCAC\\xF8\\x89\\x15\\xF9b\\xFE\\xE1J\n\r1\\xAAV(\\x15\\x95\\xC5?\\x04J\n\r\\x82\\xC1\\x86A\\x15\\x80\\x8D}\\xCAJ\n\r\\xC1`\\x9C\\xEE\\x15\\xF4\\xF4G=J\n\r\\x98\\xCE\\x81\\x94\\x15\\xF4\\xF4G=J\n\rEU\\x93K\\x15\\xF4\\xF4G=J\n\r\\x18\\x85gp\\x15\\xA8o\\xE6\\xDEJ\n\r\\xA9\\x07\\x99_\\x15M\\x1F\\xC5tJ\n\r\\x9A\\xCB\\xEC\\x8E\\x15s\\xA3}AJ\n\r\\xE3\\xBA8\\x9A\\x15\\xA7\\xC8F`J\n\r"
		"\\xE1\\x04\\xADA\\x15@_\\x06\\xE4J\n\r\\x14\\xAA\\\\\\x16\\x15\\xDF\\x17J?J\n\r\\xAF5\\xAF\\xC9\\x15=\\xF6G\\xECJ\n\r$RE\\xB0\\x15\\x1Ez{AJ\n\r\\xD21N\r\\x15\\x1Ez{AJ\n\r}\\x96\\x9D\\xD6\\x15.\\xC9\\x956J\n\rGL\\\\n\\x15\\xEE\\xC4\\xAFMP\\x04ZG\\x08\\x01\\x10\\xC7\\xE5\\xA7\\x9B\\x06\\x18\\xB5\\xF7\\xA6\\x9B\\x06\"\\x18\n\n1.3.36.152\\x10\\xB5\\xF7\\xA6\\x9B\\x06\\x18\\x00 \\x00(\\x00*\\x1D\n\r107.0.5304.88\\x10\\xB5\\xF7\\xA6\\x9B\\x06\\x18\\x00 \\x1E"
		"(\\x80\\x80\\x0Cb\\x04CHBFj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x078\\x06@\\x06\\x80\\x01\\xD0\\xBB\\xDF\\x9A\\x06\\x90\\x01\\x82\\x01\\x90\\x01\\xA2\\x01\\x90\\x01\\xD8\\x01\\x90\\x01\\x8C\\x03\\x90\\x01\\xE2\\x04\\x90\\x01\\xAD\\x05\\x90\\x01\\x8A\\x06\\x98\\x01\\x01\\xB0\\x01\\x01\\xBA\\x01\\x0C\\x15i\\x04u~%\\x00\\x00\\x00\\x00(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.40.0\\x1D\\x87Oh\\x96\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1D\\xC0^"
		"Q\\xFD\\xC2\\x01\\x14\\x08\\x0C\\x12\\x0B104.289.200\\x1D\\xD0\\x0C\\xB8S\\xC2\\x01\r\\x08\n\\x12\\x047689\\x1DB\\xB5K\t\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0254\\x1Da=\\x97\\xE7\\xC2\\x01\\x11\\x08\\x03\\x12\\x081.0.0.13\\x1D\\xA6p\\x8D\\xAB\\xC2\\x01\\x0C\\x08\\x12\\x12\\x03365\\x1DS\\x85*\\xBE\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.2557.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\n"
		"\\x08\\x1B\\x12\\x011\\x1D\\x15\\xA9\\x8AG\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x03\\x18\\x03 \\x00(\\x000\\x008\\x00@\\x01H\\x00P\\x00X\\x00`\\x00h\\x03x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xE2\\x01\\x1620221106-180040.506000\\xF8\\x01\\xC7\\x1C\\x80\\x02\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x88\\x02\\x01\\x92\\x02$a9ea7d39-ee25-44c9-81c5-9365a12d3c7f\\xA8\\x02\\xCD\\x102\\x0F\t\\x17\\xF9\\xCB\\xEA\\x16s\\xCD\\x8C\\x10d\\x1A\\x02\\x10e2\\x0F\t\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x022\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x01", 
		LAST);*/

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=12:6HoSJZizlybgbigA9ywhuAYh8FyjHbFDDN_og4LGDHw&cup2hreq=8adee7e9f029839cb7127e056e0e53598276577e3450ee3301cbc805ea254335", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{d56fa96c-a19d-4b5b-b311-ab574ccb368f}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5776,\"lang\""
		":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{7bd645af-19c3-4974-a56e-1af278a5ed62}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBF\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.96684f87153a35a0d42605af5acefb0e98aab61e7a8f453dd09d309c5fafc05f\"}]},\"ping\":{\"ping_freshness\":\"{24eaca3f-f61a-449a-92b5-013a3fabea76}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"9.40.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"CHBF\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f12424526d688fd436344bf25f228942137e8ed6826e618acc5d896788a714b9\"}]},\"ping\":{\"ping_freshness\":\"{d875ffa6-de40-4ddd-8994-53d8c626d599}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"20221101.486349250\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBF\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname\":\"Win (Including up-to-date)\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{83826332-f643-49f8-864f-bc97ea140fda}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBF\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace"
		"\"}]},\"ping\":{\"ping_freshness\":\"{d0987a15-4eae-43b8-9c8c-a57f0ceed9aa}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"CHBF\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.be2a85536b56e5b705d0fccff729871c8021d8084659d0f69c6eed389054e123\"}]},\"ping\":{\"ping_freshness\":\"{37edb542-3448-4486-bfd8-9b51c61b6c75}"
		"\",\"rd\":5789},\"updatecheck\":{},\"version\":\"365\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBF\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.e7973d612cbdb825e9950038be9cb915cb938fbd202efadd3520898c24cd45b6\"}]},\"ping\":{\"ping_freshness\":\"{b279a597-c379-434a-9731-341b05cd3f71}\",\"rd\":5789},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"54\"}"
		",{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{7b8f93d4-a4f4-413c-ae74-e5e4de819f78}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBF\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\""
		"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.53b80cd098239da10cf9b09ec426f37feda531074c62e55dd0b92c4a240d609f\"}]},\"ping\":{\"ping_freshness\":\"{738848c4-97d7-4bf8-a721-4b53c941831a}\",\"rd\":5789},\"tag\":\"stable\",\"updatecheck\":{},\"version\":\"104.289.200\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBF\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.094bb5428bb5576fba938c091ab0fa9ec07c85c7c8b6a993b50965f54eba91c6\"}]},\"ping\":{\"ping_freshness\":\"{123610ba-34b4-4a27-b92d-92967d9b097f}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"7689\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBF\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":["
		"{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{9b30c93e-8f4a-4644-a6f8-1a7f4153eb6a}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"CHBF\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.2f55153d60a0415783c2968bb388eb5b9f5f1408a6f026c4b16a40c10b88fd8f\"}]},\"ping\":{\"ping_freshness\":\"{caeb0f63-099c-4077-b354-43624c656ce9}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"401\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"CHBF\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{1b4c815f-df50-400c-8c48-f84b67ea97f2}\",\"rd\":5789},\"updatecheck\":{},\""
		"version\":\"1.0.7.1652906823\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBF\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.871e826d4ca828225fff49d2e57609b86d3d870ac688c009a06e92643415e033\"}]},\"ping\":{\"ping_freshness\":\"{c16bc00f-4a4a-4607-8dfb-b456dac9fd25}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"2884\"},{\"appid\":\""
		"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"CHBF\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80AndAbove\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.e3a7322843834a5270a01c56533a34a24b1a253e3bda6f14046e10d818446165\"}]},\"ping\":{\"ping_freshness\":\"{0d8c3409-1bdc-41d5-b4d8-a33e553864b2}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"2022.10.19.1145\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\""
		"CHBF\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1a670447b38c51e0fe14a9b3020989152a906a6f01d02a37c26c66a8f0b0671f\"}]},\"ping\":{\"ping_freshness\":\"{3493c25e-0dae-40a3-97ee-0410daf2f5b8}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"109.0.5407.0\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"CHBF\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{eaaa3992-572c-4cc0-a5e3-95595cb83b38}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"20220505\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"CHBF\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\""
		":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{ff5d0864-27ee-4c12-8f26-007ae9fe6541}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"dnhnnofocefcglhjeigmkhcgfoaipbaa\",\"brand\":\"CHBF\",\"cohort\":\"1:16j3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.831f042cb02b1fc2f9fed3106f544be8b336828681a1613ced571c09ebca4cf2\"}]},\"ping\":{\"ping_freshness\":\"{8ae1318d-7335-4c8f-9b97-6283f9ebc0b4}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"2022.11.1.1\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"CHBF\",\"cohort\":\"1:17lx:\",\"cohorthint\":\"desktop_1_flatbuffer\",\"cohortname\":\"desktop_1_flatbuffer\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.42229e9c82a535c988540e9e2d6100bfc3f02c4b3ed8b76dc6db1a161252fbd6\"}]},\"ping\":{\"ping_freshness\":\"{5daa53c5-e309-47a7-b7ab-c3857ee42e7a}\",\"rd\":5789},\"tag\":\"desktop_1_flatbuffer\",\"updatecheck\":{},\"version\":\"29.6\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"CHBF\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{6e561f60-dfee-43e7-94c8-82f2d5456057}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"CHBF\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\"enabled\":true,\"installdate\":5776,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\""
		":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{3e5fb733-9787-4deb-b5d2-fb519353ee8c}\",\"rd\":5789},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19044.2130\"},\"prodversion\":\"107.0.5304.88\",\"protocol\":\"3.1\",\"requestid\":\"{2a343fce-1f17-4ea7-a1a0-cb6e81b2e7c2}\",\"sessionid\":\"{c0c22f0c-6953-40bf-89f9-40539dd4531b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.152\"},\"updaterversion\":\"107.0.5304.88\"}}", 
		LAST);

	lr_start_transaction("Login");

	web_add_cookie("_gcl_au=1.1.236732185.1667900939; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_ga_16RLNEQYYD=GS1.1.1667900946.1.0.1667900946.60.0.0; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_ga=GA1.1.591895939.1667900946; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_fbp=fb.2.1667900946745.1135314360; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_ga=GA1.3.591895939.1667900946; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_gid=GA1.3.1622794706.1667900959; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("LFR_SESSION_STATE_52246=1667900961819; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_ga=GA1.6.591895939.1667900946; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_gid=GA1.6.1622794706.1667900959; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("_dc_gtm_UA-1875601-12=1; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("sc.ASP.NET_SESSIONID=; DOMAIN=secure.rewards.qa.oldmutual.co.za");

	web_add_cookie("sc.Status=2; DOMAIN=secure.rewards.qa.oldmutual.co.za");
	
	web_reg_save_param("code","LB=idc/cb\?code\=","RB=&","Search=Headers",LAST);
	
	//"Search=Headers"
	
	//state=
	
	//idc/cb?code=7

	web_submit_data("authorization.ping", 
		"Action=https://sso.qa.oldmutual.co.za/as/{token}/resume/as/authorization.ping", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://sso.qa.oldmutual.co.za/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=pf.username", "Value=AUM006@123", ENDITEM, 
		"Name=pf.pass", "Value=Password@123", ENDITEM, 
		"Name=pf.ok", "Value=clicked", ENDITEM, 
		"Name=pf.cancel", "Value=", ENDITEM, 
		"Name=pf.adapterId", "Value=ConsumerLoginForm", ENDITEM, 
		EXTRARES, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/om-bootstrap.min.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/normalize.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/main.css?minifierType=css", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/jquery-ui.min.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/select2.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/bootstrap-datepicker.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/video-js.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/colorbox.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/js/everything.jsp?browserId=other&themeId=om_WAR_omtheme&colorSchemeId=01&minifierType=js&minifierBundleId=javascript.everything.files&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/dynamic_data_lists/js/main.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/journal/js/main.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/journal/js/navigation.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/dynamic_data_mapping/js/main.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/angular-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/jquery-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/lib-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/bootstrap-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/bundles/layout.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/main.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Regular.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTA3LjAuNTMwNC44OBIXCT_TwIrKkxM1EgUNi3ksxRIFDXM60yw=?alt=proto", "Referer=", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Medium.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/header-editorial-arrow.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Bold.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Light.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-KBV64Z", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/envelope.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/color-base/color-base-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/footer-editorial-arrow.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/documents/30101/156394/footer_pattern_optimized.jpg/04821f30-89e5-45f1-a3dd-b21c5460ed6b?t=1539757924814", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/event-move/event-move-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progress-bar.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/widget-base/assets/skins/sam/widget-base.css", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/js/liferay/available_languages.jsp?browserId=other&themeId=om_WAR_omtheme&colorSchemeId=01&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/liferay/language.js&/html/js/aui/transition/transition-min.js&/html/js/aui/base-core/base-core-min.js&/html/js/aui/base-observable/base-observable-min.js&/html/js/aui/aui-widget-cssclass/aui-widget-cssclass-min.js&/html/js/aui/aui-widget-toggle/aui-widget-toggle-min.js&/html/js/liferay/ajax_session.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/"
		"dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progress-tracker-bar.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/widget-stack/assets/skins/sam/widget-stack.css&/html/js/aui/cssbutton/cssbutton-min.css&/html/js/aui/widget-modality/assets/skins/sam/widget-modality.css&/html/js/aui/resize-base/assets/skins/sam/resize-base.css", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/liferay/hudcrumbs.js&/html/js/aui/gesture-simulate/gesture-simulate-min.js&/html/js/liferay/navigation_interaction.js&/html/js/aui/escape/escape-min.js&/html/js/liferay/portlet_url.js&/html/js/aui/aui-dialog-iframe-deprecated/aui-dialog-iframe-deprecated-min.js&/html/js/aui/widget-autohide/widget-autohide-min.js&/html/js/aui/button-core/button-core-min.js&/html/js/aui"
		"/button-plugin/button-plugin-min.js&/html/js/aui/widget-buttons/widget-buttons-min.js&/html/js/aui/widget-modality/widget-modality-min.js&/html/js/aui/dd-ddm-base/dd-ddm-base-min.js&/html/js/aui/dd-drag/dd-drag-min.js&/html/js/aui/dd-plugin/dd-plugin-min.js&/html/js/aui/dd-constrain/dd-constrain-min.js&/html/js/aui/event-flick/event-flick-min.js&/html/js/aui/event-valuechange/event-valuechange-min.js&/html/js/aui/event-tap/event-tap-min.js&/html/js/aui/dd-ddm/dd-ddm-min.js&/html/js/aui/dd-ddm-drop"
		"/dd-ddm-drop-min.js&/html/js/aui/dd-drop/dd-drop-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/dd-drop-plugin/dd-drop-plugin-min.js&/html/js/aui/dd-delegate/dd-delegate-min.js&/html/js/aui/resize-base/resize-base-min.js&/html/js/aui/resize-plugin/resize-plugin-min.js&/html/js/aui/button/button-min.js&/html/js/aui/button-group/button-group-min.js&/html/js/aui/aui-button-core/aui-button-core-min.js&/html/js/aui/aui-toolbar/aui-toolbar-min.js&/html/js/aui/"
		"aui-widget-toolbars/aui-widget-toolbars-min.js&/html/js/aui/aui-modal/aui-modal-min.js&/html/js/liferay/widget_zindex.js&/html/js/liferay/util_window.js&/html/js/liferay/sign_in_modal.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/querystring-parse/querystring-parse-min.js&/html/js/aui/aui-url/aui-url-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/favicon.ico", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progressTrackerFullStatus.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progressTrackerHalfStatus.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", ENDITEM, 
		LAST);

	web_url("33ea71a4-e077-4dec-8947-c60ac2086e81", 
		"URL=https://secure.rewards.qa.oldmutual.co.za/documents/30101/226721/mapping-for-clm-esb.json/33ea71a4-e077-4dec-8947-c60ac2086e81", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/om-theme/assets/images/loading.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		LAST);

	web_custom_request("me", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me?fields=mainPointsBalance;lastModify;mainIdentifier;firstName;lastName;termAndConditionAcceptedDate", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("me_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("EXT_NO_FIN_INTERESTS", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_NO_FIN_INTERESTS", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("reward-categories", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?name=Financial%20Interests", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.googletagmanager.com/gtag/js?id=G-16RLNEQYYD&l=dataLayer&cx=c", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://connect.facebook.net/en_US/fbevents.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("vouchers", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/vouchers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("balances", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/account/balances", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("tiers", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/recognition-schemas/Display/tiers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("transactions", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=01&reasonCode=02&statuses=B&statuses=V&types=ER&types=CA&types=CQ&types=CR&types=MM&types=AT&types=A2&types=A4&types=A6&types=A8&types=PI&types=PC&types=RV&types=PE&types=CL&types=PP&types=PQ&types=DF&types=OI&types=AY&orderField=processDate&orderType=DESC", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/tier-green.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/arrow-down.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", ENDITEM, 
		LAST);

	web_custom_request("transactions_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=03&statuses=B&statuses=V&statuses=N&types=BR&types=RF&types=XV&types=XD&types=PF&types=A1&types=A3&types=A5&types=A7&types=AO&types=PC&types=WC&types=AN&types=PT&orderField=processDate&orderType=DESC", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1002200952/?random=1667900939381&cv=11&fst=1667900939381&bg=ffffff&guid=ON&async=1&gtm=2wgb20&u_w=1536&u_h=864&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&ref=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&tiba=Dashboard%20-%20Old%20Mutual%20On%20Track&auid=236732185.1667900939&rfmt=3&fmt=4", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/735676229/?random=1667900939387&cv=11&fst=1667900939387&bg=ffffff&guid=ON&async=1&gtm=2wgb20&u_w=1536&u_h=864&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&ref=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&tiba=Dashboard%20-%20Old%20Mutual%20On%20Track&auid=236732185.1667900939&rfmt=3&fmt=4", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("TRANSACTION_TYPES", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/TRANSACTION_TYPES", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("me_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me?fields=mainPointsBalance;lastModify;mainIdentifier;firstName;lastName;termAndConditionAcceptedDate", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("EXT_NO_FIN_INTERESTS_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_NO_FIN_INTERESTS", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("me_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("reward-categories_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?name=Financial%20Interests", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=https://static.ads-twitter.com/uwt.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20573061.210634783;sz=1x2;ord=1691105956;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("balances_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/account/balances", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20552630.210615122;sz=1x2;ord=1453760376;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("tiers_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/recognition-schemas/Display/tiers", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("transactions_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=01&reasonCode=02&statuses=B&statuses=V&types=ER&types=CA&types=CQ&types=CR&types=MM&types=AT&types=A2&types=A4&types=A6&types=A8&types=PI&types=PC&types=RV&types=PE&types=CL&types=PP&types=PQ&types=DF&types=OI&types=AY&orderField=processDate&orderType=DESC", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20549041.210606827;sz=1x2;ord=1584922328;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("reward-categories_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?parentCategory=CAT_FI_01", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20553616.210606866;sz=1x2;ord=1039032426;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("EXT_POINT_BALANCE_RATE", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_POINT_BALANCE_RATE", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("TRANSACTION_TYPES_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/TRANSACTION_TYPES", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("customer-progress-trackers_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://d2oh4tlt9mrke9.cloudfront.net/Record/js/sessioncam.recorder.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("rewards", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_IR_01&status=A&startDateTo=2022-11-08&endDateFrom=2022-11-08", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("POINT_TYPES", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/POINT_TYPES", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect", 
		"URL=https://analytics.google.com/g/collect?v=2&tid=G-16RLNEQYYD&gtm=2oeb20&_p=253183819&_gaz=1&cid=591895939.1667900946&ul=en-us&sr=1536x864&ir=1&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B107.0.5304.88%7CChromium%3B107.0.5304.88%7CNot%253DA%253FBrand%3B24.0.0.0&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&_eu=EA&_s=1&sid=1667900946&sct=1&seg=0&dl=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&dr=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&dt="
		"Dashboard%20-%20Old%20Mutual%20On%20Track&en=page_view&_fv=1&_nsi=1&_ss=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("partners", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/partners?status=A", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("RECOGNITION_TIERS", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/RECOGNITION_TIERS", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("vouchers_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/vouchers", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("transactions_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=03&statuses=B&statuses=V&statuses=N&types=BR&types=RF&types=XV&types=XD&types=PF&types=A1&types=A3&types=A5&types=A7&types=AO&types=PC&types=WC&types=AN&types=PT&orderField=processDate&orderType=DESC", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=https://www.facebook.com/tr/?id=325838121657613&ev=PageView&dl=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&rl=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&if=false&ts=1667900946746&sw=1536&sh=864&v=2.9.89&r=stable&ec=0&o=30&fbp=fb.2.1667900946745.1135314360&it=1667900946129&coo=false&rqm=GET", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://pagead2.googlesyndication.com/pagead/js/r20221101/r20110914/elements/html/omrhp.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=776050069490029&ev=PageView&dl=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&rl=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&if=false&ts=1667900946748&sw=1536&sh=864&v=2.9.89&r=stable&ec=0&o=30&fbp=fb.2.1667900946745.1135314360&it=1667900946129&coo=false&rqm=GET", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=414938905819711&ev=PageView&dl=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&rl=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&if=false&ts=1667900946749&sw=1536&sh=864&v=2.9.89&r=stable&ec=0&o=28&fbp=fb.2.1667900946745.1135314360&it=1667900946129&coo=false&rqm=GET", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("EXT_CREPORT_VALID_PERIOD", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_CREPORT_VALID_PERIOD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjstccX14E1pQ8AQq4eVAlVubcr3nwt5qfNyafzMYR-l3i4YEgQ0qKSl7Q9_-u4ceNWnRUj7kVCroWNY5A7BADWzm8kGwXQyJxZj3ohxMLd0H-nTBLAd2qeQq6ctY1OWgCNOpFJDqA9VN3elM2I8XxyTFkgwmwFL5qVQuKw&sai=AMfl-YThnNs5pPQIG-IKTiZOnC1R74X1BZnpYFN8cSv8pUSnWrBaHiyYzvGzbr8cEckRf_lhLlrY3dhHofLVLc9VIA&sig=Cg0ArKJSzBM7KbZs3_vZEAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=1&cbvp=1&cisv=r20221101.40906&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjsv3yuYkkmklpUzbqC5N6ptIAUWWqqQxqcbewpj1UrYZ9dE3zxPk0V_pQf_cJEEovFbLi0PB5B2yY-moXpVaKajpGJ4s8NefGChrEq_iO9LzAkpvYB9cmf0hNixTq_NEgVL7yWKaMm4gabWwUOaDcLRV1ditVhA-5xdIOA&sai=AMfl-YSmGiv4Q6Fo8RZj_SjHqiQuFloYGwXGfGqoSfRmYw3SIqBeZ-d6hGyNVwff1NQW0ahqnO2HtEtPhber2KwbfQ&sig=Cg0ArKJSzM7PPDXlL2ymEAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=1&cbvp=1&cisv=r20221101.98754&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("EXT_POINT_BALANCE_RATE_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_POINT_BALANCE_RATE", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("reward-categories_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?parentCategory=CAT_FI_01", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjstbmTJXxDjb-O6opXN7VyyyTEVCIbb7vGgreG90GaIrou-vin52Gzd9U1ICKiacuvgc2RdEkc45KMDhgSkx--8bLfmS5lu0EByqVP0WCQwG6AA-rnKnqiAOvMAFhw4kolOdU-MHdZDB6Q_ECVmxJNQemMssxzUNlzCd5Q&sai=AMfl-YQbhYbcLPdXpmH-A7_Hu5FP8dEnDnayWxMBxkK1eFHoH9ZF3jlbJXCaFYUTYkoEHJpYMlG1YRcAr2YeiS-Yiw&sig=Cg0ArKJSzHiGYYqh569vEAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=1&cbvp=1&cisv=r20221101.38571&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjsuKs3CcNStvnicNLyi2Slz1Fv-EESkgvlBDQWk-mSCG3pwc2Uk32JZl7YJYzN32sG4GC7bC4xIwwGwMXHi0x9MmSbSDjhWQ3cwQlLD4Qky8T8lp_QKi7GEO16MEEQtTePBaVIiUYnxhZ1FYE7ewXdiBHxs2uHWTmca4Wg&sai=AMfl-YS9VbIbMG-fowGHi1pSc-XvVWdIfsaXMT6DWC9Yew52YYrtgX33nR-vzgJkbAc8ao8r5wcirWmdA2AbEdgNXA&sig=Cg0ArKJSzMFjO8RmlbO6EAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=2&cbvp=1&cisv=r20221101.00023&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://t.co/1/i/adsct?bci=4&eci=3&event=%7B%7D&event_id=fb7d7f1c-242e-4a74-b7e0-8c6ff6c8575b&integration=gtm-base&p_id=Twitter&p_user_id=0&pl_id=2087093c-b588-4283-8729-d8bb30776c5e&tw_document_href=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&tw_iframe_status=0&txn_id=o2lmu&type=javascript&version=2.3.29", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("rewards_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_IR_01&status=A&startDateTo=2022-11-08&endDateFrom=2022-11-08", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=https://analytics.twitter.com/1/i/adsct?bci=4&eci=3&event=%7B%7D&event_id=fb7d7f1c-242e-4a74-b7e0-8c6ff6c8575b&integration=gtm-base&p_id=Twitter&p_user_id=0&pl_id=2087093c-b588-4283-8729-d8bb30776c5e&tw_document_href=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&tw_iframe_status=0&txn_id=o2lmu&type=javascript&version=2.3.29", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://www.googletagservices.com/activeview/js/current/rx_lidar.js?cache=r20110914", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("partners_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/partners?status=A", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("POINT_TYPES_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/POINT_TYPES", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("RECOGNITION_TIERS_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/RECOGNITION_TIERS", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("EXT_CREPORT_VALID_PERIOD_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_CREPORT_VALID_PERIOD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ws.sessioncam.com/Record/config.aspx?url=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&jsver=596&originalUrl=https://secure.rewards.qa.oldmutual.co.za&sse=1667900960418&inTg=a&acr=0", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17564", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17563", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/15202", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/15203", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("collect_2", 
		"URL=https://stats.g.doubleclick.net/g/collect?v=2&tid=G-16RLNEQYYD&cid=591895939.1667900946&gtm=2oeb20&aip=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_3", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j98&tid=UA-1875601-12&cid=591895939.1667900946&jid=708119194&gjid=1933085382&_gid=1622794706.1667900959&_u=aCDAiAADRAAAAEAAI~&z=1033170377", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		EXTRARES, 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15205", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15204", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15208", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15206", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("rewards_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_02&status=A&type=F", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rewards_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_03&status=A&type=F", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rewards_5", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_04&status=A&type=F", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../files/15209", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/15212", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("rewards_6", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_02&status=A&type=F", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("rewards_7", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_04&status=A&type=F", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("rewards_8", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_03&status=A&type=F", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=../files/15202", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17304", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=https://www.google.com/ads/ga-audiences?t=sr&aip=1&_r=4&slf_rd=1&v=1&_v=j98&tid=UA-1875601-12&cid=591895939.1667900946&jid=708119194&_u=aCDAiAADRAAAAEAAI~&z=1743715922", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("customer-progress-trackers_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_5", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_6", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_7", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_8", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../files/15203", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("customer-progress-trackers_9", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_10", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_11", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_12", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_13", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_14", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_15", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTA3LjAuNTMwNC44OBIbCg0IBRAGGAEiAzAwMTABEOaCDxoCGAW2PGSLEhsKDQgBEAYYASIDMDAxMAEQ6qkLGgIYBdbXoOUSGwoNCAcQBhgBIgMwMDEwARCKhgwaAhgF7EYRJRIZCg0IARAGGAEiAzAwMTADEBQaAhgF1-jfjBIaCg0IARAIGAEiAzAwMTAEENYuGgIYBe-zLXYSGgoNCA8QBhgBIgMwMDEwARCDcxoCGAW8XCReEhkKDQgKEAgYASIDMDAxMAEQBxoCGAXFy6jzEhkKDQgJEAYYASIDMDAxMAEQIBoCGAUbWeufEhoKDQgIEAYYASIDMDAxMAEQnREaAhgFCQyutxIbCg0IDRAGGAEiAzAwMTABEIDRARoCGAVlj3vkEhsKDQgDEAYYASIDMDAxMAEQ95sLGgIYBSVrGZgSGwoNCA4QBhgBIgMwMDEwARCw2wYaAhgF-Id-VxIaCg0IEB"
		"AGGAEiAzAwMTABELIVGgIYBTqH_7oaLAgBCAMIBQgGCAcICAgJCAoIDQgOCA8IEAgREAEQCBoGCgTBvCLpIAEgAyAE&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("customer-progress-trackers_16", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_17", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_18", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_19", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_20", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_21", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_22", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_23", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_24", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_25", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_26", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_27", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_28", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_29", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_url("dc_pre=CNCpyKSnnvsCFWdLkQUdI3MKMw;src=6284216;type=omcoza;cat=omcorem1;ord=1570796354355;gtm=2wgb20;auiddc=236732185.1667900939;u1=%2Fgroup%2Fom%2Fdashboard;u9=591895939.1667900946;~oref=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashbo", 
		"URL=https://adservice.google.com/ddm/fls/i/dc_pre=CNCpyKSnnvsCFWdLkQUdI3MKMw;src=6284216;type=omcoza;cat=omcorem1;ord=1570796354355;gtm=2wgb20;auiddc=236732185.1667900939;u1=%2Fgroup%2Fom%2Fdashboard;u9=591895939.1667900946;~oref=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://6284216.fls.doubleclick.net/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_30", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_31", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_32", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_33", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_34", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_35", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_36", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_37", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_38", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_39", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_40", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_41", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_42", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_43", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_44", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_45", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_46", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_47", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_48", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_49", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_50", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("customer-progress-trackers_51", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_52", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_53", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_54", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_55", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_56", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_57", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_58", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_59", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_60", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_61", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_62", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_63", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_64", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_65", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_66", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_67", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_68", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_69", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_70", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_71", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_72", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_73", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_74", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_75", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_76", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_77", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_78", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_79", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_80", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_81", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_82", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_83", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_84", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_85", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_86", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_87", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_88", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_89", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_90", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_91", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_92", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_93", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_94", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_95", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_96", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		LAST);

	web_custom_request("customer-progress-trackers_97", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=../files/17204", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	web_custom_request("customer-progress-trackers_98", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		EXTRARES, 
		"Url=../files/15716", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17202", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17203", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17307", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/15720", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/15710", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17206", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17205", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17207", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17209", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17208", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		"Url=../files/17306", "Referer=https://secure.rewards.qa.oldmutual.co.za/", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	return 0;
}