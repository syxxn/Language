#include <stdio.h>

struct list {
	int num;
	struct list* next;
};

int main() {
	struct list a = { 1,0 };
	struct list b = { 2,0 };
	struct list c = { 3,0 };
	struct list d = { 4,0 };
	struct list* head, *current;

	a.next = &b;
	b.next = &c;
	c.next = &d;
	head = &a;

	current = head;

	while (current != NULL) {
		printf("%d ", current->num);
		current = current->next;
	}
	return 0;
}