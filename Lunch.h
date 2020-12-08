#ifndef LUNCH_H
#define LUNCH_H

struct recipes *read_file_lunch();
struct recipes *allocate_struct_lunch();
int lunch_meal(int consumption);

#endif
