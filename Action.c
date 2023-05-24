Action()
{
	
	
	lr_start_transaction("T01_'Test_Messages");
	

	lr_output_message("Successfully");
	
    
   lr_end_transaction("T01_'Test_Messages", LR_AUTO);

   	

	
	return 0;
}
