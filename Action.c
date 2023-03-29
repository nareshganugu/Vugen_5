Action()
{
	
	
	lr_start_transaction("S01_SCEE_TC03_Check_Eligibility");
	
	web_custom_request("web_custom_request",
		"URL=https://check-eligibility-plab.px-npe2103.pks.t-mobile.com/scee/v1/eligible-criteria/eligible-ban",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={\"conversionId\":\"EnsembleBillingToSamson\",\r\n"
		"  \"sourceBAN\": \"12345\"\r\n"
		"  \r\n"
		"  }",
		LAST);
    
   	lr_end_transaction("S01_SCEE_TC03_Check_Eligibility", LR_FAIL);
   	

	
	return 0;
}
