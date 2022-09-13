class Solution {
public:
    bool isPresent(int a,vector<int>& students)
    {
        for(int i=0;i<students.size();i++)
        {
            if(students[i]==a)
            {
                return true;
            }
        }
        return false;
    }
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        while(isPresent(sandwiches.front(),students) && sandwiches.size()>0)
        {
            if(sandwiches.front() == students.front())
            {
                sandwiches.erase(sandwiches.begin());
                students.erase(students.begin());
            }
            else
            {
                int flag = students.front();
                students.erase(students.begin());
                students.push_back(flag);
            }
        }
        return sandwiches.size();
    }
}; 