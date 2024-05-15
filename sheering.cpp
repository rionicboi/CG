int main()
{
	

	int a,b;
	cout<<"Enter shearing factor x: ";
		cin>>a;
		cout<<"enter shearing factor y: ";
		cin>>b;
		float t[3][3]= {
				{1,b,0},
				{a,1,0},
				{0,0,1}
			};
			cout<<"Tranformation matrix: ";
			print_matrix(t, 3);
			float** transformed=matrix_multiplication(points,t,n);
			cout<<"Transformed matrix: ";
		
			cout<<"\n[";
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<3;j++)
					cout<<transformed[i][j]<<" ";
				cout<<endl;
			}
			cout<<"]";
		}
