class Student extends Person{
	private int[] testScores;
    
    public Student(String firstName, String lastName, int identification, int [] testScores) {
        super(firstName,lastName,identification);
        this.testScores = testScores;
    }
    
    public char calculate() {
        int sum = 0;
        for (int i = 0; i < testScores.length; i ++) {
            sum += testScores[i];
        }
        sum /= testScores.length;
        if (sum >= 90 && sum <= 100) { return 'O'; } 
        if (sum >= 80 && sum < 90) { return 'E'; } 
        if (sum >= 70 && sum < 80) { return 'A'; } 
        if (sum >= 55 && sum < 70) { return 'P'; } 
        if (sum >= 40 && sum < 55) { return 'D'; }
        return 'T';
    }
}
