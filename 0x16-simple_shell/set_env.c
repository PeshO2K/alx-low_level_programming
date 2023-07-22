#include <stdlib.h>
#include <string.h>

int set_env(const char *name, const char *value, int overwrite) {
    if (getenv(name) != NULL && !overwrite) {
        return 0;
    }
    size_t name_len = strlen(name);
    size_t value_len = strlen(value);
    char *env_str = malloc(name_len + value_len + 2);
    if (env_str == NULL) {
        return -1;
    }
    memcpy(env_str, name, name_len);
    env_str[name_len] = '=';
    memcpy(env_str + name_len + 1, value, value_len);
    env_str[name_len + value_len + 1] = '\0';
    return putenv(env_str);
}

