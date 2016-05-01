//The internet address
struct in_addr {
  unsigned int s_addr;
};

//DNS host entry structure
struct hostent {
  char *h_name;       //domain name of the host
  char **h_aliases;   //seperated parts of the domain name of the host
  int h_addrtype;     //host address type (AF_NET)
  int h_length;       //length of an address
  char **h_addr_list; //null-terminated array of in_addr structs
};

//Internet style socket address structure
struct sockaddr_in {
  usigned short sin_family;
  usigned short sin_port;
  struct in_addr sin_addr;
  usigned char sin_zero[8];
};
