from employee import employee

class engineer(employee):
    def __init__(self,name,address,age,employe_id,company,salary,skill,tools,position):
        super().__init__(name,address,age,employe_id,company,salary)
        self.skill = skill
        self.tools = tools
        self.position = position
        
    def set_skill(self,skill):
        self.skill = skill
    def get_skill(self):
        return self.skill
        
    def set_tools(self,tools):
        self.tools = tools
    def get_tools(self):
        return self.tools
        
    def set_position(self,position):
        self.position = position
    def get_position(self):
        return self.position
    

def print_table(data_list):
    if not data_list:
        print("\nTidak ada data untuk ditampilkan.")
        return

    headers = {
        'id': 'ID',
        'name': 'Nama',
        'position': 'Posisi',
        'company': 'Perusahaan',
        'salary': 'Gaji (Rp)',
        'skill': 'Skill',
        'tools': 'Tools'
    }

    
    col_widths = {
        'id': max(len(headers['id']), max(len(str(e.get_employee_id())) for e in data_list)),
        'name': max(len(headers['name']), max(len(str(e.get_name())) for e in data_list)),
        'position': max(len(headers['position']), max(len(str(e.get_position())) for e in data_list)),
        'company': max(len(headers['company']), max(len(str(e.get_company())) for e in data_list)),
        'salary': max(len(headers['salary']), max(len(f"{e.get_salary():,}") for e in data_list)),
        'skill': max(len(headers['skill']), max(len(str(e.get_skill())) for e in data_list)),
        'tools': max(len(headers['tools']), max(len(str(e.get_tools())) for e in data_list)),
    }

    line_border = "+" + "+".join("-" * (width + 2) for width in col_widths.values()) + "+"
    header_row = "| " + " | ".join(f"{headers[key]:<{col_widths[key]}}" for key in col_widths) + " |"

    print("\n" + line_border)
    print(header_row)
    print(line_border)

    # Perbaikan: Menggunakan getter untuk properti private milik employee/person
    for eng in data_list:
        gaji_fmt = f"{eng.get_salary():,}"
        row = (
            f"| {eng.get_employee_id():<{col_widths['id']}} "
            f"| {eng.get_name():<{col_widths['name']}} "
            f"| {eng.get_position():<{col_widths['position']}} "
            f"| {eng.get_company():<{col_widths['company']}} "
            f"| {gaji_fmt:<{col_widths['salary']}} "
            f"| {eng.get_skill():<{col_widths['skill']}} "
            f"| {eng.get_tools():<{col_widths['tools']}} |"
        )
        print(row)

    print(line_border)