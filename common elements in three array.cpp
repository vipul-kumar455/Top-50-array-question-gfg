vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
			 set<int>s1(A,A+n1);
             set<int>s2(B,B+n2);
              set<int>s3(C,C+n3);
              vector<int>v;
              for(auto i:s3)
              {
                  if(s1.find(i)!=s1.end() && s2.find(i)!=s2.end())
                  {
                      v.push_back(i);
                  }
              }
              return v;
            
        }