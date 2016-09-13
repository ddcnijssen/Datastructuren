/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file [Stapel].cc
* @date datum laatste wijziging
**/

class array{
   public:
      void create();
      bool isEmpty();
      void clear();
      bool push(newItem);
      bool pop();
      bool top(topItem);
}  
int & count = 0;
void array::create(int & count){
   for(int i = 0; i < 50; i++){
      stapel[i] = NULL;
   }
   count = 0;
}
bool array::isEmpty(){
   int i = 0;
   while(stapel[i] == NULL){
      if(i >= 50) return true;
      i++;
   }
   return false;
}
void array::clear(){
   
}
bool array::push(newItem){}
bool array::pop(){}
bool array::top(topItem){}
