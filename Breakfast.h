#ifndef BREAKFAST_H
#define BREAKFAST_H

struct recipes *read_file_breakfast();
struct recipes *allocate_struct_breakfast();
int breakfast_meal(int consumption);

#endif