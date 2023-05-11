Action()
{
	
	
	lr_start_transaction("T01_'Test_Message");
	

	lr_output_message("Successfully edited ");
	
    
   lr_end_transaction("T01_'Test_Message", LR_AUTO);

   	

	
	return 0;
}
