import java.util.Scanner;

public class Matrix  {

	private int n, m;                 
	private float data[][] = new float[100][100];
	
	
	public Matrix () 
	{	
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter your matrix size: \nRow:     n= ");
		n = scanner.nextInt();
		System.out.println("Column:  m= "); 
		m = scanner.nextInt();
		System.out.println("\n");
		for (int i=0;i<n;i++)
			for(int j=0; j<m; j++)
		       {
				System.out.print("data["+i+"]["+j+"]= ");				 
		    	data[i][j] = scanner.nextFloat();
		        } 
		
	}
	public Matrix(int n, int m) 
	{
		this.n=n; this.m=m;
		  for (int i=0;i<n;i++)
		    for(int j=0; j<m; j++)
		       data[i][j]=0;
	}   //create M-by-N matrix of 0's
//	public Matrix(float a[][],int row,int col)
//	{
//		 for (int k=0; k<row;k++)
//			 for (int j=0; j<col; j++)
//				 data[k][j] = a[k][j];
//	}// Create matrix based on 2d array
	 public Matrix(float[][] data) {
	        n = data.length;
	        m = data[0].length;
	        this.data = new float[n][m];
	        for (int i = 0; i < n; i++)
	            for (int j = 0; j < m; j++)
	                    this.data[i][j] = (float) data[i][j];
	    }
	public  Matrix( Matrix A) 
	{
		 n = A.n; m = A.m;
	     for (int k=0; k<A.n;k++)
	     for (int j=0; j<A.m; j++)
	     data[k][j] = A.data[k][j];
	} //Copy constructor
	 public Matrix add(Matrix B) // Addition of two Matrices
    {
		Matrix temp = new Matrix(B.n, B.m);
		temp.n = B.n; temp.m = B.m;
       for (int k=0; k<B.n;k++)
        for (int j=0; j<B.m; j++)
           temp.data[k][j] = data[k][j] + B.data[k][j];
        return (temp);
    }
	 public Matrix minus(Matrix B) // Addition of two Matrices
	    {
			Matrix temp = new Matrix(B.n, B.m);
			temp.n = B.n; temp.m = B.m;
	       for (int k=0; k<B.n;k++)
	        for (int j=0; j<B.m; j++)
	           temp.data[k][j] = data[k][j] - B.data[k][j];
	        return (temp);
	    }
	  public Matrix multiply(Matrix B)  // Production of two Matrices
      {
        Matrix temp=new Matrix(B.n,B.m);
       if (m==B.n)  
         for (int i=0; i<n; i++)
           for (int j=0; j<B.m; j++)
               for (int k=0; k<m; k++)
                 temp.data[i][j]= temp.data[i][j] + data[i][k]*B.data[k][j];
         
           return temp;        
      }
	  public boolean equal (Matrix B) // Comparision of two Matrices
		         {
		            for (int k=0; k<B.n;k++)
		             for (int j=0; j<B.m; j++)
		                   { if (data[k][j] == B.data[k][j])
		                       continue ;
		                     else
		                       return false;
		                    }
		             return true;
		         }
	  
	public void display()
	{
		for (int i=0; i<n; i++)
        {  
			for (int j=0; j<m; j++)
			System.out.print(data[i][j] + " ");       
            System.out.println("");
        }              
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Matrix A = new Matrix();
		System.out.println("Matrix A: \n");
		A.display();
		Matrix B = new Matrix(A);
		System.out.println("Matrix B: \n");
		B.display();
		float a[][]= {{1,3},{2,5}};
		Matrix C = new Matrix(a);
		System.out.println("Matrix C: \n");
		C.display();
		Matrix D=A.add(B);
		System.out.println("A+B= \n");
		D.display();
		Matrix E=A.minus(B);
		System.out.println("A-B= \n");
		E.display();
		Matrix F=A.multiply(B);
		System.out.println("A*B= \n");
		F.display();
		if (A.equal(B))
			System.out.println("Matrix A is equal to matrix B");
		  else
			System.out.println("Matrix A is not equal to matrix B");
		
		
	}

}
