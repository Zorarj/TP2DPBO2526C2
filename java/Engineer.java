public class Engineer extends Employee {
    public String skill;
    public String tools;
    public String position;

    public Engineer(){
    }

    public Engineer(String name,String address,int age,
        String employeeId,String company,int salary,
        String skill,String tools,String position){

        super(name,address,age,employeeId,company,salary);
        this.skill = skill;
        this.tools = tools;
        this.position = position;
    }

    public void setSkill(String skill){
        this.skill = skill;
    }
    public String getSkill(){
        return this.skill;
    }
    public void setTools(String tools){
        this.tools = tools;
    }
    public String getTools(){
        return this.tools;
    }
    public void setPosition(String position){
        this.position = position;
    }
    public String getPosition(){
        return this.position;
    }

    public static void printTable(Engineer[] dataList) {
        if (dataList == null || dataList.length == 0) {
            System.out.println("\nTidak ada data untuk ditampilkan.");
            return;
        }

        String hId = "ID", hName = "Nama", hPos = "Posisi", hComp = "Perusahaan", hSal = "Gaji (Rp)", hSkill = "Skill", hTools = "Tools";

        int wId = hId.length(), wName = hName.length(), wPos = hPos.length(), wComp = hComp.length(), wSal = hSal.length(), wSkill = hSkill.length(), wTools = hTools.length();

        for (Engineer e : dataList) {
            if (e != null) {
                if (e.getEmployeeId().length() > wId) wId = e.getEmployeeId().length();
                if (e.getName().length() > wName) wName = e.getName().length();
                if (e.getPosition().length() > wPos) wPos = e.getPosition().length();
                if (e.getCompany().length() > wComp) wComp = e.getCompany().length();
                
                String salaryStr = String.format("%,d", e.getSalary());
                if (salaryStr.length() > wSal) wSal = salaryStr.length();
                
                if (e.getSkill().length() > wSkill) wSkill = e.getSkill().length();
                if (e.getTools().length() > wTools) wTools = e.getTools().length();
            }
        }

        String border = "+" + "-".repeat(wId + 2) + "+" + "-".repeat(wName + 2) + "+" + "-".repeat(wPos + 2) + "+" 
                        + "-".repeat(wComp + 2) + "+" + "-".repeat(wSal + 2) + "+" + "-".repeat(wSkill + 2) + "+" 
                        + "-".repeat(wTools + 2) + "+";

        System.out.println("\n" + border);
        System.out.printf("| %-"+wId+"s | %-"+wName+"s | %-"+wPos+"s | %-"+wComp+"s | %-"+wSal+"s | %-"+wSkill+"s | %-"+wTools+"s |\n",
                hId, hName, hPos, hComp, hSal, hSkill, hTools);
        System.out.println(border);

        for (Engineer eng : dataList) {
            if (eng != null) {
                String salaryFmt = String.format("%,d", eng.getSalary());
                System.out.printf("| %-"+wId+"s | %-"+wName+"s | %-"+wPos+"s | %-"+wComp+"s | %-"+wSal+"s | %-"+wSkill+"s | %-"+wTools+"s |\n",
                        eng.getEmployeeId(), eng.getName(), eng.getPosition(), eng.getCompany(), salaryFmt, eng.getSkill(), eng.getTools());
            }
        }

        System.out.println(border);
    }
}
