typedef struct {
    char *name;
    char *team;
    int hour, minute, second;
} Driver;

typedef struct {
    unsigned long size;
    Driver *list;
    int sort;
} Data;

int get_command(char *command);

Driver *add_driver(Driver *list, unsigned long size, char *command);

unsigned long update_time(Driver *list, unsigned long size, char *command);

int compare_time(const void *a, const void *b);

void print_results(const Driver *list, unsigned long size);

char *get_filename(const char *command);

int save_results(const Driver *list, unsigned long size, const char *command);

Driver *load_results(const char *command, unsigned long *size);

void free_mem(Driver *list, unsigned long size);

int execute(Data *data, char *command);
