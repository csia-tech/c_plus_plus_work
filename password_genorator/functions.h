void modify ( std::string & buffer, bool decrypt, int offset, int bytes );
static inline bool is_code( char c);
std::string encode(char const* bytes_to_encode, unsigned int in_len);
std::string decode(std::string const& encoded_string);
