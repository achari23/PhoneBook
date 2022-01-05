#ifndef contact_header_h
#define contact_header_h
typedef struct _Contact {
	char* prefix;
	char* first_name;
	char* last_name;
	char* nick_name;
	char** phone_numbers;
	char** email_addresses;
	char** home_address;
	struct _Contact * next_contact;
} Contact;


#endif
