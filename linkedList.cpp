#define LINKED_LIST 1
#include <string>

namespace linkedList{

    struct chint{
        int num;
        std::string word;
    };

    struct list_struct {
        chint value;
        list_struct* next;
    };

    class list 
    {
    private:
        list_struct* head;
        list_struct* tail;

    public:
        int length{0};
        list() {
            head = nullptr;
            tail = nullptr;
        }
        void addItem(chint* item) {
            list_struct* temp = new list_struct;
            temp->value = *item;
            temp->next = nullptr;
            if (head == nullptr) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = tail->next;
            }
            length += 1;
        }
        // Return ptr to head value of the list
        chint* accessHeadValPtr(){
            return &(head->value);
        }
        // Return ptr to tail value of the list
        chint* accessTailValPtr() {
            return &(tail->value);
        }
        // Returns nullptr if index is out of range
        chint* accessIndexValPtr(int index) {
            if (index > length-1) { return nullptr; }
            list_struct* tempPtr{head};
            list_struct* tempSecPtr{nullptr};
            for (int i=0; i<index; i++){
                tempSecPtr = tempPtr->next;
                tempPtr = tempSecPtr;
            }
            return &(tempPtr->value);
        }
    };
};
