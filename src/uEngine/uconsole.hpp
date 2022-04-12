#pragma once

namespace uconsole
{

class command
{
public:
	command(const char *);
	command(const command &other);
	~command();
	
	// TODO: vtable
	
	command &operator=(const command &other);
	
	void save(class gtl::intrusive_ptr<class vfs::iwriter, struct gtl::intrusive_base, class gtl::intrusive_default_functionality>);
	
	void status(char (&)[256]) const;
	void info(char (&)[256]) const;
	
	void invalid_syntax();
	
	bool EQ(const char *a, const char *b) const;
	
	const char *name() const;
};

class cmd_integer
{
public:
	cmd_integer(const char *sName, int *, int nMinValue, int nMaxValue);
	cmd_integer(const cmd_integer &other);
	~cmd_integer();
	
	// TODO: vtable
	
	cmd_integer &operator=(const cmd_integer &other);
	
	void execute(const char *);
	
	void status(char (&)[256]) const;
	void info(char (&)[256]) const;
	
	const int get_value() const;
	
	const int get_min() const;
	const int get_max() const;
};

class cmd_float
{
public:
	cmd_float(const char *sName, float *, float fMinValue, float fMaxValue);
	cmd_float(const cmd_float &other);
	~cmd_float();
	
	// TODO: vtable
	
	cmd_float &operator=(const cmd_float &other);
	
	void execute(const char *);
	
	void status(char (&)[256]) const;
	void info(char (&)[256]) const;
	
	const float get_value() const;
	
	const float get_min() const;
	const float get_max() const;
};

class cmd_mask
{
public:
	cmd_mask(const char *sName, struct _flags<unsigned int> *pFlags, unsigned int);
	cmd_mask(const cmd_mask &other);
	~cmd_mask();
	
	// TODO: vtable
	
	cmd_mask &operator=(const cmd_mask &other);
	
	void execute(const char *);
	
	void status(char (&)[256]) const;
	void info(char (&)[256]) const;
	
	const bool get_value() const;
};

class cmd_token
{
public:
	cmd_token(const char *sName, unsigned int *, struct u_token *pToken);
	cmd_token(const cmd_token &other);
	~cmd_token();
	
	// TODO: vtable
	
	cmd_token &operator=(const cmd_token &other);
	
	void execute(const char *);
	
	void status(char (&)[256]) const;
	void info(char (&)[256]) const;
	
	struct u_token *get_token() const;
};

class server
{
public:
	server();
	server(const server &other);
	~server();
	
	// TODO: vtable
	
	server &operator=(const server &other);
};

extern server *g_console;

class server_impl
{
public:
	server_impl();
	server_impl(const server_impl &other);
	~server_impl();
	
	// TODO: const uconsole::server_impl::`vftable'{for `uinput::receiver'}
	// TODO: const uconsole::server_impl::`vftable'{for `uconsole::server'}
	
	server_impl &operator=(const server_impl &other);
	
	void create();
	void destroy();
	
	void show();
	void hide();
	
	void on_frame();
	void on_render();
	void on_press_key(int nKey, bool);
	
	void r_on_key_press(int, int, int);
	void r_on_key_hold(int, int, int);
	void r_on_key_release(int, int, int);
	
	void r_on_mouse_move(int, int, int, int);
	
	void command_add(command *pCmd);
	void command_remove(command *pCmd);
	
	void enumerate(class fastdelegate::FastDelegate<void (command*)>);
	
	void execute(const char *sCmd);
	void execute_command();
	void execute_script(const char *s);
	
	void select_command();
	
	char *get_string(const char *) const;
	bool get_bool(const char *, bool &) const;
	int get_integer(const char *, int &, int &, int &) const;
	float get_float(const char *, float &, float &, float &);
	char *get_token(const char *) const;
};

};