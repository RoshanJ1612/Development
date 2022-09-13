class Solution {
public:
     int countStudents(vector<int>& students, vector<int>& sandwiches) 
     {
        
       int indexs[] = {0,0};
        
       
        
        queue<int> students_q, sandwiches_q;
        
     
        
        for(int i=0;i<students.size();i++)
        {
            if(students[i]==0)
                
                indexs[0]++;
            else if(students[i]==1)
               
                indexs[1]++;
         
            students_q.push(students[i]);
            sandwiches_q.push(sandwiches[i]);
        }
        
      
        
        while(indexs[sandwiches_q.front()]>0 && students_q.size()!=0 )
        {
   
            if(sandwiches_q.front()==students_q.front())
            {
              
                indexs[students_q.front()]--;
               
                sandwiches_q.pop();
                
                students_q.pop();
            }
             
            else
            {
            
                int temp = students_q.front();
                
                students_q.pop();
                students_q.push(temp);
            }    
           
            if(sandwiches_q.size()==0)
                break;
        }
        
       
        return students_q.size();
     }
}; 