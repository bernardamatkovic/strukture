struct elem {
       char prezime[20], ime[20];
       int datum;
       float tekuci,devizni;
       int a,b,c,d;
       };
       
struct que {
       elem klijent[10000];
       int front,rear;
       };
       
typedef que& red;

int AddOne(int n) {
    return ((n+1)%10000); 
    }
    
elem FrontQ(que& q) {
     if(AddOne(q.rear)==q.front)
       system("pause");
       exit(0);
                     }
     return q.klijent[q.front];
     }
     
void EnQueueQ(elem x, que& q) {
                                         
     q.rear=AddOne(q.rear);
     q.klijent[q.rear]=x;
     }
     
void DeQueueQ(que& q) {
     if(AddOne(q.rear)==q.front) return;
                       
     q.front=AddOne(q.front);
     }
     
void InitQ(que& q) {
     q.front=0;
     q.rear=9999;
     }
     
bool IsEmptyQ(que& q) {
     if(AddOne(q.rear)==q.front) return true;
     else return false;
     }
