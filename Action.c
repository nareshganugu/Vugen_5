Action()
{
	
	lr_start_transaction("T04");
	
	lr_output_message("Hello TMobile, {p_MSIDN}");
	
	lr_end_transaction("T04", LR_AUTO);


	
	return 0;
}
