# 1 "c:\\patke\\scripts\\rewards1\\\\combined_Rewards1.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\patke\\scripts\\rewards1\\\\combined_Rewards1.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\patke\\scripts\\rewards1\\\\combined_Rewards1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\patke\\scripts\\rewards1\\\\combined_Rewards1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\patke\\scripts\\rewards1\\\\combined_Rewards1.c" 2

# 1 "Action.c" 1
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
		"LAST");



	 







	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(5);
	lr_continue_on_error (1);
	
	
	
	 web_reg_save_param_ex(
        "ParamName=redirect_url",
        "LB=<a href\=\"",
        "RB=\">Provider",
        "LAST");
	lr_think_time(5);
	
	web_url("sales-dashboard",
		"URL={baseURL}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");
	
	web_convert_param("URL","SourceString={redirect_url}","SourceEncoding=HTML","TargetEncoding=PLAIN","LAST");
	
	 lr_continue_on_error (0);
	 
	 lr_log_message(lr_eval_string("URL parameter={URL}"));
	 
	web_reg_save_param("token","LB=<form method=\"POST\" action=\"/as/","RB=/resume/as/authorization.ping\"","LAST");
	
	 

	
	
	
	web_url("authorization.oauth2",
		"URL={URL}"
		"vnd_pi_application_name=secure.rewards.qa.oldmutual.co.za",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://secure.rewards.qa.oldmutual.co.za/",
		"Snapshot=t4.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=../assets/oldmutual/content/img/header_shadow.png", "Referer=https://sso.qa.oldmutual.co.za/", "ENDITEM",
		"URL=../favicon.ico", "Referer=https://sso.qa.oldmutual.co.za/", "ENDITEM",
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTA3LjAuNTMwNC44OBIXCTxLHmlx2asHEgUNy5myIxIFDb5JoHs=?alt=proto", "ENDITEM",
		"LAST");

	lr_think_time(1);
	 
# 114 "Action.c"

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
		"LAST");

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
	
	web_reg_save_param("code","LB=idc/cb\?code\=","RB=&","Search=Headers","LAST");
	
	 
	
	 
	
	 

	web_submit_data("authorization.ping", 
		"Action=https://sso.qa.oldmutual.co.za/as/{token}/resume/as/authorization.ping", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://sso.qa.oldmutual.co.za/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=pf.username", "Value=AUM006@123", "ENDITEM", 
		"Name=pf.pass", "Value=Password@123", "ENDITEM", 
		"Name=pf.ok", "Value=clicked", "ENDITEM", 
		"Name=pf.cancel", "Value=", "ENDITEM", 
		"Name=pf.adapterId", "Value=ConsumerLoginForm", "ENDITEM", 
		"EXTRARES", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/om-bootstrap.min.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/normalize.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/main.css?minifierType=css", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/jquery-ui.min.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/select2.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/bootstrap-datepicker.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/video-js.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/libs/colorbox.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/js/everything.jsp?browserId=other&themeId=om_WAR_omtheme&colorSchemeId=01&minifierType=js&minifierBundleId=javascript.everything.files&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/dynamic_data_lists/js/main.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/journal/js/main.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/journal/js/navigation.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/portlet/dynamic_data_mapping/js/main.js?browserId=other&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/angular-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/jquery-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/lib-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/vendors/bootstrap-bundle.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/bundles/layout.js?var=655", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/js/main.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Regular.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTA3LjAuNTMwNC44OBIXCT_TwIrKkxM1EgUNi3ksxRIFDXM60yw=?alt=proto", "Referer=", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Medium.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/header-editorial-arrow.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Bold.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/fonts/montserrat/Montserrat-Light.ttf", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-KBV64Z", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/envelope.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/color-base/color-base-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/footer-editorial-arrow.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/documents/30101/156394/footer_pattern_optimized.jpg/04821f30-89e5-45f1-a3dd-b21c5460ed6b?t=1539757924814", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/event-move/event-move-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progress-bar.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/widget-base/assets/skins/sam/widget-base.css", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/html/js/liferay/available_languages.jsp?browserId=other&themeId=om_WAR_omtheme&colorSchemeId=01&minifierType=js&languageId=en_US&b=6205&t=1666780105000", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/liferay/language.js&/html/js/aui/transition/transition-min.js&/html/js/aui/base-core/base-core-min.js&/html/js/aui/base-observable/base-observable-min.js&/html/js/aui/aui-widget-cssclass/aui-widget-cssclass-min.js&/html/js/aui/aui-widget-toggle/aui-widget-toggle-min.js&/html/js/liferay/ajax_session.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/"
		"dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progress-tracker-bar.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/widget-stack/assets/skins/sam/widget-stack.css&/html/js/aui/cssbutton/cssbutton-min.css&/html/js/aui/widget-modality/assets/skins/sam/widget-modality.css&/html/js/aui/resize-base/assets/skins/sam/resize-base.css", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/liferay/hudcrumbs.js&/html/js/aui/gesture-simulate/gesture-simulate-min.js&/html/js/liferay/navigation_interaction.js&/html/js/aui/escape/escape-min.js&/html/js/liferay/portlet_url.js&/html/js/aui/aui-dialog-iframe-deprecated/aui-dialog-iframe-deprecated-min.js&/html/js/aui/widget-autohide/widget-autohide-min.js&/html/js/aui/button-core/button-core-min.js&/html/js/aui"
		"/button-plugin/button-plugin-min.js&/html/js/aui/widget-buttons/widget-buttons-min.js&/html/js/aui/widget-modality/widget-modality-min.js&/html/js/aui/dd-ddm-base/dd-ddm-base-min.js&/html/js/aui/dd-drag/dd-drag-min.js&/html/js/aui/dd-plugin/dd-plugin-min.js&/html/js/aui/dd-constrain/dd-constrain-min.js&/html/js/aui/event-flick/event-flick-min.js&/html/js/aui/event-valuechange/event-valuechange-min.js&/html/js/aui/event-tap/event-tap-min.js&/html/js/aui/dd-ddm/dd-ddm-min.js&/html/js/aui/dd-ddm-drop"
		"/dd-ddm-drop-min.js&/html/js/aui/dd-drop/dd-drop-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/dd-drop-plugin/dd-drop-plugin-min.js&/html/js/aui/dd-delegate/dd-delegate-min.js&/html/js/aui/resize-base/resize-base-min.js&/html/js/aui/resize-plugin/resize-plugin-min.js&/html/js/aui/button/button-min.js&/html/js/aui/button-group/button-group-min.js&/html/js/aui/aui-button-core/aui-button-core-min.js&/html/js/aui/aui-toolbar/aui-toolbar-min.js&/html/js/aui/"
		"aui-widget-toolbars/aui-widget-toolbars-min.js&/html/js/aui/aui-modal/aui-modal-min.js&/html/js/liferay/widget_zindex.js&/html/js/liferay/util_window.js&/html/js/liferay/sign_in_modal.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/combo/?browserId=other&minifierType=&languageId=en_US&b=6205&t=1666780105000&/html/js/aui/querystring-parse/querystring-parse-min.js&/html/js/aui/aui-url/aui-url-min.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/favicon.ico", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progressTrackerFullStatus.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/progressTrackerHalfStatus.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", "ENDITEM", 
		"LAST");

	web_url("33ea71a4-e077-4dec-8947-c60ac2086e81", 
		"URL=https://secure.rewards.qa.oldmutual.co.za/documents/30101/226721/mapping-for-clm-esb.json/33ea71a4-e077-4dec-8947-c60ac2086e81", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/group/om/dashboard", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/om-theme/assets/images/loading.svg", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"LAST");

	web_custom_request("me", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me?fields=mainPointsBalance;lastModify;mainIdentifier;firstName;lastName;termAndConditionAcceptedDate", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("me_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("EXT_NO_FIN_INTERESTS", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_NO_FIN_INTERESTS", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("reward-categories", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?name=Financial%20Interests", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.googletagmanager.com/gtag/js?id=G-16RLNEQYYD&l=dataLayer&cx=c", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://connect.facebook.net/en_US/fbevents.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("vouchers", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/vouchers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("balances", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/account/balances", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("tiers", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/recognition-schemas/Display/tiers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("transactions", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=01&reasonCode=02&statuses=B&statuses=V&types=ER&types=CA&types=CQ&types=CR&types=MM&types=AT&types=A2&types=A4&types=A6&types=A8&types=PI&types=PC&types=RV&types=PE&types=CL&types=PP&types=PQ&types=DF&types=OI&types=AY&orderField=processDate&orderType=DESC", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/tier-green.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"Url=https://secure.rewards.qa.oldmutual.co.za/om-theme/assets/images/arrow-down.png", "Referer=https://secure.rewards.qa.oldmutual.co.za/om-theme/css/om-styles.css?minifierType=css&var=655", "ENDITEM", 
		"LAST");

	web_custom_request("transactions_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=03&statuses=B&statuses=V&statuses=N&types=BR&types=RF&types=XV&types=XD&types=PF&types=A1&types=A3&types=A5&types=A7&types=AO&types=PC&types=WC&types=AN&types=PT&orderField=processDate&orderType=DESC", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1002200952/?random=1667900939381&cv=11&fst=1667900939381&bg=ffffff&guid=ON&async=1&gtm=2wgb20&u_w=1536&u_h=864&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&ref=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&tiba=Dashboard%20-%20Old%20Mutual%20On%20Track&auid=236732185.1667900939&rfmt=3&fmt=4", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/735676229/?random=1667900939387&cv=11&fst=1667900939387&bg=ffffff&guid=ON&async=1&gtm=2wgb20&u_w=1536&u_h=864&hn=www.googleadservices.com&frm=0&url=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&ref=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&tiba=Dashboard%20-%20Old%20Mutual%20On%20Track&auid=236732185.1667900939&rfmt=3&fmt=4", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("TRANSACTION_TYPES", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/TRANSACTION_TYPES", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("me_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me?fields=mainPointsBalance;lastModify;mainIdentifier;firstName;lastName;termAndConditionAcceptedDate", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("EXT_NO_FIN_INTERESTS_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_NO_FIN_INTERESTS", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("me_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("reward-categories_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?name=Financial%20Interests", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=https://static.ads-twitter.com/uwt.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20573061.210634783;sz=1x2;ord=1691105956;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("balances_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/account/balances", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20552630.210615122;sz=1x2;ord=1453760376;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("tiers_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/recognition-schemas/Display/tiers", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("transactions_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=01&reasonCode=02&statuses=B&statuses=V&types=ER&types=CA&types=CQ&types=CR&types=MM&types=AT&types=A2&types=A4&types=A6&types=A8&types=PI&types=PC&types=RV&types=PE&types=CL&types=PP&types=PQ&types=DF&types=OI&types=AY&orderField=processDate&orderType=DESC", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20549041.210606827;sz=1x2;ord=1584922328;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("reward-categories_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?parentCategory=CAT_FI_01", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ad.doubleclick.net/ddm/adj/N464414.197812NSO.CODESRV/B20553616.210606866;sz=1x2;ord=1039032426;dc_lat=;dc_rdid=;tag_for_child_directed_treatment=?", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("EXT_POINT_BALANCE_RATE", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_POINT_BALANCE_RATE", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("TRANSACTION_TYPES_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/TRANSACTION_TYPES", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("customer-progress-trackers_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://d2oh4tlt9mrke9.cloudfront.net/Record/js/sessioncam.recorder.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("rewards", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_IR_01&status=A&startDateTo=2022-11-08&endDateFrom=2022-11-08", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("POINT_TYPES", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/POINT_TYPES", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

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
		"LAST");

	web_custom_request("partners", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/partners?status=A", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("RECOGNITION_TIERS", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/RECOGNITION_TIERS", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("vouchers_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/vouchers", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("transactions_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/transactions?firstResult=0&maxResults=10&processingDateFrom=2021-11-08&reasonCode=03&statuses=B&statuses=V&statuses=N&types=BR&types=RF&types=XV&types=XD&types=PF&types=A1&types=A3&types=A5&types=A7&types=AO&types=PC&types=WC&types=AN&types=PT&orderField=processDate&orderType=DESC", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=https://www.facebook.com/tr/?id=325838121657613&ev=PageView&dl=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&rl=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&if=false&ts=1667900946746&sw=1536&sh=864&v=2.9.89&r=stable&ec=0&o=30&fbp=fb.2.1667900946745.1135314360&it=1667900946129&coo=false&rqm=GET", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://pagead2.googlesyndication.com/pagead/js/r20221101/r20110914/elements/html/omrhp.js", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://www.facebook.com/tr/?id=776050069490029&ev=PageView&dl=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&rl=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&if=false&ts=1667900946748&sw=1536&sh=864&v=2.9.89&r=stable&ec=0&o=30&fbp=fb.2.1667900946745.1135314360&it=1667900946129&coo=false&rqm=GET", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://www.facebook.com/tr/?id=414938905819711&ev=PageView&dl=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&rl=https%3A%2F%2Fsso.qa.oldmutual.co.za%2F&if=false&ts=1667900946749&sw=1536&sh=864&v=2.9.89&r=stable&ec=0&o=28&fbp=fb.2.1667900946745.1135314360&it=1667900946129&coo=false&rqm=GET", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("EXT_CREPORT_VALID_PERIOD", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_CREPORT_VALID_PERIOD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjstccX14E1pQ8AQq4eVAlVubcr3nwt5qfNyafzMYR-l3i4YEgQ0qKSl7Q9_-u4ceNWnRUj7kVCroWNY5A7BADWzm8kGwXQyJxZj3ohxMLd0H-nTBLAd2qeQq6ctY1OWgCNOpFJDqA9VN3elM2I8XxyTFkgwmwFL5qVQuKw&sai=AMfl-YThnNs5pPQIG-IKTiZOnC1R74X1BZnpYFN8cSv8pUSnWrBaHiyYzvGzbr8cEckRf_lhLlrY3dhHofLVLc9VIA&sig=Cg0ArKJSzBM7KbZs3_vZEAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=1&cbvp=1&cisv=r20221101.40906&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjsv3yuYkkmklpUzbqC5N6ptIAUWWqqQxqcbewpj1UrYZ9dE3zxPk0V_pQf_cJEEovFbLi0PB5B2yY-moXpVaKajpGJ4s8NefGChrEq_iO9LzAkpvYB9cmf0hNixTq_NEgVL7yWKaMm4gabWwUOaDcLRV1ditVhA-5xdIOA&sai=AMfl-YSmGiv4Q6Fo8RZj_SjHqiQuFloYGwXGfGqoSfRmYw3SIqBeZ-d6hGyNVwff1NQW0ahqnO2HtEtPhber2KwbfQ&sig=Cg0ArKJSzM7PPDXlL2ymEAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=1&cbvp=1&cisv=r20221101.98754&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("EXT_POINT_BALANCE_RATE_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_POINT_BALANCE_RATE", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("reward-categories_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/reward-categories?parentCategory=CAT_FI_01", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjstbmTJXxDjb-O6opXN7VyyyTEVCIbb7vGgreG90GaIrou-vin52Gzd9U1ICKiacuvgc2RdEkc45KMDhgSkx--8bLfmS5lu0EByqVP0WCQwG6AA-rnKnqiAOvMAFhw4kolOdU-MHdZDB6Q_ECVmxJNQemMssxzUNlzCd5Q&sai=AMfl-YQbhYbcLPdXpmH-A7_Hu5FP8dEnDnayWxMBxkK1eFHoH9ZF3jlbJXCaFYUTYkoEHJpYMlG1YRcAr2YeiS-Yiw&sig=Cg0ArKJSzHiGYYqh569vEAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=1&cbvp=1&cisv=r20221101.38571&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://googleads4.g.doubleclick.net/pcs/view?xai=AKAOjsuKs3CcNStvnicNLyi2Slz1Fv-EESkgvlBDQWk-mSCG3pwc2Uk32JZl7YJYzN32sG4GC7bC4xIwwGwMXHi0x9MmSbSDjhWQ3cwQlLD4Qky8T8lp_QKi7GEO16MEEQtTePBaVIiUYnxhZ1FYE7ewXdiBHxs2uHWTmca4Wg&sai=AMfl-YS9VbIbMG-fowGHi1pSc-XvVWdIfsaXMT6DWC9Yew52YYrtgX33nR-vzgJkbAc8ao8r5wcirWmdA2AbEdgNXA&sig=Cg0ArKJSzMFjO8RmlbO6EAE&uach_m=[UACH]&cry=1&fbs_aeid=[gw_fbsaeid]&urlfix=1&omid=0&rm=1&ctpt=2&cbvp=1&cisv=r20221101.00023&arae=0&ftch=1&adurl=", "Referer=https://"
		"secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://t.co/1/i/adsct?bci=4&eci=3&event=%7B%7D&event_id=fb7d7f1c-242e-4a74-b7e0-8c6ff6c8575b&integration=gtm-base&p_id=Twitter&p_user_id=0&pl_id=2087093c-b588-4283-8729-d8bb30776c5e&tw_document_href=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&tw_iframe_status=0&txn_id=o2lmu&type=javascript&version=2.3.29", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("rewards_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_IR_01&status=A&startDateTo=2022-11-08&endDateFrom=2022-11-08", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=https://analytics.twitter.com/1/i/adsct?bci=4&eci=3&event=%7B%7D&event_id=fb7d7f1c-242e-4a74-b7e0-8c6ff6c8575b&integration=gtm-base&p_id=Twitter&p_user_id=0&pl_id=2087093c-b588-4283-8729-d8bb30776c5e&tw_document_href=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&tw_iframe_status=0&txn_id=o2lmu&type=javascript&version=2.3.29", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://www.googletagservices.com/activeview/js/current/rx_lidar.js?cache=r20110914", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("partners_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/partners?status=A", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("POINT_TYPES_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/POINT_TYPES", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("RECOGNITION_TIERS_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/dictionaries/RECOGNITION_TIERS", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("EXT_CREPORT_VALID_PERIOD_2", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/parameters/EXT_CREPORT_VALID_PERIOD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ws.sessioncam.com/Record/config.aspx?url=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard&jsver=596&originalUrl=https://secure.rewards.qa.oldmutual.co.za&sse=1667900960418&inTg=a&acr=0", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17564", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17563", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/15202", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/15203", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("collect_2", 
		"URL=https://stats.g.doubleclick.net/g/collect?v=2&tid=G-16RLNEQYYD&cid=591895939.1667900946&gtm=2oeb20&aip=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_3", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j98&tid=UA-1875601-12&cid=591895939.1667900946&jid=708119194&gjid=1933085382&_gid=1622794706.1667900959&_u=aCDAiAADRAAAAEAAI~&z=1033170377", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"EXTRARES", 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15205", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15204", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15208", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://oldmutual-sit.clm-comarch.com/b2c/files/15206", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("rewards_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_02&status=A&type=F", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("rewards_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_03&status=A&type=F", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("rewards_5", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_04&status=A&type=F", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../files/15209", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/15212", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("rewards_6", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_02&status=A&type=F", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("rewards_7", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_04&status=A&type=F", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("rewards_8", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/rewards?category=CAT_FI_03&status=A&type=F", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=../files/15202", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17304", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=https://www.google.com/ads/ga-audiences?t=sr&aip=1&_r=4&slf_rd=1&v=1&_v=j98&tid=UA-1875601-12&cid=591895939.1667900946&jid=708119194&_u=aCDAiAADRAAAAEAAI~&z=1743715922", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("customer-progress-trackers_3", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_4", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_5", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_6", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_7", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_8", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../files/15203", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("customer-progress-trackers_9", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_10", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_11", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_12", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_13", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_14", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_15", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTA3LjAuNTMwNC44OBIbCg0IBRAGGAEiAzAwMTABEOaCDxoCGAW2PGSLEhsKDQgBEAYYASIDMDAxMAEQ6qkLGgIYBdbXoOUSGwoNCAcQBhgBIgMwMDEwARCKhgwaAhgF7EYRJRIZCg0IARAGGAEiAzAwMTADEBQaAhgF1-jfjBIaCg0IARAIGAEiAzAwMTAEENYuGgIYBe-zLXYSGgoNCA8QBhgBIgMwMDEwARCDcxoCGAW8XCReEhkKDQgKEAgYASIDMDAxMAEQBxoCGAXFy6jzEhkKDQgJEAYYASIDMDAxMAEQIBoCGAUbWeufEhoKDQgIEAYYASIDMDAxMAEQnREaAhgFCQyutxIbCg0IDRAGGAEiAzAwMTABEIDRARoCGAVlj3vkEhsKDQgDEAYYASIDMDAxMAEQ95sLGgIYBSVrGZgSGwoNCA4QBhgBIgMwMDEwARCw2wYaAhgF-Id-VxIaCg0IEB"
		"AGGAEiAzAwMTABELIVGgIYBTqH_7oaLAgBCAMIBQgGCAcICAgJCAoIDQgOCA8IEAgREAEQCBoGCgTBvCLpIAEgAyAE&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", "ENDITEM", 
		"LAST");

	web_custom_request("customer-progress-trackers_16", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_17", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_18", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_19", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_20", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_21", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_22", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_23", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_24", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_25", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_26", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_27", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_28", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_29", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("dc_pre=CNCpyKSnnvsCFWdLkQUdI3MKMw;src=6284216;type=omcoza;cat=omcorem1;ord=1570796354355;gtm=2wgb20;auiddc=236732185.1667900939;u1=%2Fgroup%2Fom%2Fdashboard;u9=591895939.1667900946;~oref=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashbo", 
		"URL=https://adservice.google.com/ddm/fls/i/dc_pre=CNCpyKSnnvsCFWdLkQUdI3MKMw;src=6284216;type=omcoza;cat=omcorem1;ord=1570796354355;gtm=2wgb20;auiddc=236732185.1667900939;u1=%2Fgroup%2Fom%2Fdashboard;u9=591895939.1667900946;~oref=https%3A%2F%2Fsecure.rewards.qa.oldmutual.co.za%2Fgroup%2Fom%2Fdashboard", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://6284216.fls.doubleclick.net/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_30", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_31", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_32", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_33", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_34", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_35", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_36", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_37", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_38", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_39", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_40", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_41", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_42", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_43", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_44", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_45", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_46", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_47", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_48", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_49", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_50", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("customer-progress-trackers_51", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_52", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_53", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_54", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_55", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_56", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_57", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_58", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_59", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_60", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_61", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_62", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_63", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_64", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_65", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_66", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_67", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_68", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_69", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_70", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_71", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_72", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_73", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_74", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_HOM", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_75", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_76", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_HME", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_77", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_A_10P", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_78", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_79", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_CD", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_80", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_81", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_82", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_V_CAR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_83", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_84", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_A_SH", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_85", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_86", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_87", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_FWP_SI", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_88", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_89", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_90", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_91", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_92", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_93", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_94", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_DEB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_95", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_MV_FINDR", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_96", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"LAST");

	web_custom_request("customer-progress-trackers_97", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_C_SAV", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=../files/17204", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	web_custom_request("customer-progress-trackers_98", 
		"URL=https://oldmutual-sit.clm-comarch.com/b2c/me/customer-progress-trackers?progressTrackerCode=T_CREPORT", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.rewards.qa.oldmutual.co.za/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8;", 
		"EXTRARES", 
		"Url=../files/15716", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17202", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17203", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17307", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/15720", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/15710", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17206", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17205", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17207", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17209", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17208", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"Url=../files/17306", "Referer=https://secure.rewards.qa.oldmutual.co.za/", "ENDITEM", 
		"LAST");

	lr_end_transaction("Login",2);

	return 0;
}
# 5 "c:\\patke\\scripts\\rewards1\\\\combined_Rewards1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\patke\\scripts\\rewards1\\\\combined_Rewards1.c" 2

