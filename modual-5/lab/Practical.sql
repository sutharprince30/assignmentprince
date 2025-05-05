-- Create a new database named school_db and a table called students with the following columns: student_id, student_name, age, class, and address.
create schema school_db;

create table students
(
student_id int unique not null,
student_name varchar(25) not null,
age int not null,
class int not null,
address varchar(25)
);

--  Insert five records into the students table and retrieve all records using the SELECT statement.

insert into students values(101,'Ayush',19,12,'Gota');
insert into students values(102,'Gaurav',16,10,'Ranip');
insert into students values(103,'Manav',12,6,'CG_Road');
insert into students values(104,'Abhinav',15,5,null);
insert into students values(105,'Harsh',10,1,'Odhav');

select * from students;

--  Write SQL queries to retrieve specific columns (student_name and age) from the students table.

select student_name,age from students;

-- Write SQL queries to retrieve all students whose age is greater than 10

select age from students where age>10;

-- Create a table teachers with the following columns: teacher_id (Primary Key),teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE).

create table teachers
(
teacher_id int primary key,
teacher_name varchar(30) not null,
subject varchar (25) not null,
email varchar(35) unique not null,


-- Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.

foreign key (teacher_id) references teachers(teacher_id)
);

-- Create a table courses with columns: course_id, course_name, and course_credits. Set the course_id as the primary key.

create table courses 
(
course_id int primary key,
course_name varchar(25) not null,
course_credits float 
);

-- Use the CREATE command to create a database university_db.

create schema university_db;

-- Modify the courses table by adding a column course_duration using the ALTER command.

alter table courses add column course_duration varchar(15) not null;

--  Drop the course_credits column from the courses table.

alter table courses drop course_credits;

-- Drop the teachers table from the school_db database

drop table teachers ;

-- Drop the students table from the school_db database and verify that the table has been removed.

drop table students;
 
 show tables;
 
 -- Insert three records into the courses table using the INSERT command.
 
 insert into courses values (201,'Python_Backend','Six_Months');
 insert into courses values (203,'Full_Stack','Nine_Months');
 insert into courses values (210,'Frontend_Dev','Six_Months');
 select * from courses;
 
 -- Update the course duration of a specific course using the UPDATE command.

update courses set course_duration = 'Ten_Months' where course_id = 201 ;

select * from courses;
 
 -- Delete a course with a specific course_id from the courses table using the DELETE command
 
 delete from courses where course_id = 203;
 
 -- Retrieve all courses from the courses table using the SELECT statement
 
select * from courses ; 

-- Sort the courses based on course_duration in descending order using ORDER BY

select * from courses order by course_duration desc;

-- Limit the results of the SELECT query to show only the top two courses using LIMIT

select * from courses limit 2;

-- Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table

CREATE USER 'user1' IDENTIFIED BY 'user1password';
CREATE USER 'user2' IDENTIFIED BY 'user2password';

grant select on school_db.courses to 'user1';

-- 	Revoke the INSERT permission from user1 and give it to user2
revoke insert on school_db.courses from user1;

grant insert on school_db.courses to user2;

-- Insert a few rows into the courses table and use COMMIT to save the changes.

insert into courses values (206,'Graphic_Designing','Six_months');
insert into courses values (215,'Frontend','Nine_months');
insert into courses values (218,'Networking','Six_months');

commit;

--  Insert additional rows, then use ROLLBACK to undo the last insert operation.

insert into courses values (220,'Ui/UX','Eight_Months');
insert into courses values (225,'Marketing','Seven_Months');

rollback;

-- Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes.

savepoint c1;
update courses set course_duration = 'Six_months'	 where course_id = 215;
rollback to savepoint c1;

-- Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments.
 
 create table departments (
    department_id int primary key,
    department_name varchar(50)
);


create table employees (
    employee_id int primary key,
    employee_name varchar(50),
    department_id int,
    foreign key (department_id) references departments(department_id)
);

insert into  departments (department_id, department_name) values 
(1, 'Geology'),
(2, 'Engineering'),
(3, 'Marketing');


insert into employees (employee_id, employee_name, department_id) values
(101, 'Deep', 1),
(102, 'Dev', 2),
(103, 'Nisarg', 2),
(104, 'Anuj', 3);


select 
    employees.employee_id,
    employees.employee_name,
    departments.department_name
from
    employees
inner join
    departments on employees.department_id = departments.department_id;
    
    
-- Use a LEFT JOIN to show all departments, even those without employees.

select 
    departments.department_id,
    departments.department_name,
    employees.employee_id,
    employees.employee_name
from
    departments
left join
    employees on departments.department_id = employees.department_id;
    
    
-- Group employees by department and count the number of employees in each department using GROUP BY.

select 
    departments.department_id,
    departments.department_name,
    count(employees.employee_id) as employee_count
from 
    departments
left join
    employees ON departments.department_id = employees.department_id
group by
    departments.department_id,
    departments.department_name;


-- Use the AVG aggregate function to find the average salary of employees in each department.

select 
    departments.department_id,
    departments.department_name,
    AVG(employees.salary) AS average_salary
from
    departments
left join 
    employees on departments.department_id = employees.department_id
group by
    departments.department_id,
    departments.department_name;

--  Write a stored procedure to retrieve all employees from the employees table based on department.

delimiter &&

create procedure GetEmployeesByDepartment(in dept_id int)
begin
    select  
        employee_id,
        employee_name,
        department_id,
        salary
    from 
        employees
    where 
        department_id = dept_id;
end &&

delimiter ;

call GetEmployeesByDepartment(2);

-- Write a stored procedure that accepts course_id as input and returns the course details.

delimiter &&

create procedure GetCourseDetails(in input_course_id int)
begin
    select 
        course_id,
        course_name,
        course_description,
        course_duration
    from
        courses
	where 
        course_id = input_course_id;
end &&

delimiter ;


--  Create a view to show all employees along with their department names

create view EmployeeDepartmentView as
select
    employees.employee_id,
    employees.employee_name,
    employees.salary,
    departments.department_name
from
    employees
inner join
    departments on employees.department_id = departments.department_id;

select * from EmployeeDepartmentView;

-- Modify the view to exclude employees whose salaries are below $50,000.

create view EmployeeDepartmentView as
select 
    employees.employee_id,
    employees.employee_name,
    employees.salary,
    departments.department_name
from
    employees
inner join
    departments on employees.department_id = departments.department_id
where 
    employees.salary >= 50000;
    
--   Create a trigger to automatically log changes to the employees table when a new employee is added.

CREATE TABLE employee_log (
    log_id INT AUTO_INCREMENT PRIMARY KEY,
    employee_id INT,
    action VARCHAR(50),
    action_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);


create trigger after_employee_insert
after insert on employees
for each row
 begin
    insert into employee_log (employee_id, action)
    values (new.id, 'insert');
    
-- Create a trigger to update the last_modified timestamp whenever an employee record is updated.

alter table employees
add column last_modified timestamp default current_timestamp on update current_timestamp;

create trigger before_employee_update
before update on employees
for each row
begin
    set new.last_modified = current_timestamp();
end;

-- Write a PL/SQL block to print the total number of employees from the employees table.

declare
   v_total_employees number;
begin
   
   select count(*) INTO v_total_employees FROM employees;

   
   dbms_output.put_line('Total number of employees: ' || v_total_employees);
end;

-- Create a PL/SQL block that calculates the total sales from an orders table.

declare
   v_total_sales number(12, 2);  
begin
   
   select sum(order_total) into v_total_sales from orders;

   
   if v_total_sales is null then
      v_total_sales := 0;
   end if;

   
   dbms_output.put_line('Total Sales: $' || TO_CHAR(v_total_sales, '999,999,999.99'));
end;


-- Write a PL/SQL block using an IF-THEN condition to check the department of an employee.

declare
   v_employee_id    number := 101;  -- Replace with the desired employee ID
   v_department_id  number;
begin
   
   select  department_id into v_department_id
   from employees
   where employee_id = v_employee_id;

   
   IF v_department_id = 10 then
      dbms_output.put_line('Employee ' || v_employee_id || ' works in the Administration department.');
   elsif v_department_id = 20 then
      dbms_output.put_line('Employee ' || v_employee_id || ' works in the Marketing department.');
   else
      dmbs_output.put_line('Employee ' || v_employee_id || ' works in another department.');
   end if;
end;


-- Use a FOR LOOP to iterate through employee records and display their names.

begin
   for emp_rec in (select employee_name from employees) loop
      dbms_output.put_line('Employee Name: ' || emp_rec.employee_name);
   end loop ;
end;

BEGIN
   FOR emp_rec IN (select first_name, last_name from employees) loop
      dbms_output.put_line('Employee Name: ' || emp_rec.first_name || ' ' || emp_rec.last_name);
   end loop;
end;


-- Write a PL/SQL block using an explicit cursor to retrieve and display employee details.

declare 
   
   cursor emp_cursor is
      select employee_id, first_name, last_name from employees;

   
   v_employee_id   employees.employee_id%TYPE;
   v_first_name    employees.first_name%TYPE;
   v_last_name     employees.last_name%TYPE;
begin 
   
   open emp_cursor;

   
   loop
      fetch emp_cursor into v_employee_id, v_first_name, v_last_name;
      exti when emp_cursor%NOTFOUND;

      
      dbms_output.put_line('ID: ' || v_employee_id || ', Name: ' || v_first_name || ' ' || v_last_name);
   end loop;

   
   close emp_cursor;
end;

-- Create a cursor to retrieve all courses and display them one by one.

declare 
   
   cursor course_cursor is
      select course_id, course_name from courses;


   v_course_id    courses.course_id%type;
   v_course_name  courses.course_name%type;
begin
   
   open course_cursor;

   
   loop
fetch course_cursor into v_course_id, v_course_name;
      exit when course_cursor%NOTFOUND;

      
      dbms_output.put_line('Course ID: ' || v_course_id || 
                           ', Course Name: ' || v_course_name);
   end loop;

   
   close course_cursor;
end ;


--  Perform a transaction where you create a savepoint, insert records, then rollback to the savepoint.

begin
   
   insert into students (student_id, student_name)
   values  (1, 'Alice');
   
   
   savepoint after_alice;

   
   insert into students (student_id, student_name)
   values (2, 'Bob');

   insert into students (student_id, student_name)
   values (3, 'Charlie');

   
   rollback to after_alice;

   
   commit;

   dbms_output.put_line('Transaction complete: Rolled back to savepoint. Only Alice inserted.');
end;



-- Commit part of a transaction after using a savepoint and then rollback the remaining changes

begin
  
   insert into students (student_id, student_name)
   values (101, 'Alice');

   
   savepoint sp_alice;

   
   commit;  

   
   insert into students (student_id, student_name)
   values (102, 'Bob');

   insert into students (student_id, student_name)
values (103, 'Charlie');


   savepoint sp_before_rollback;

   
   rollback to sp_before_rollback;  

   
   commit;

   dmbs_output.put_line('Transaction complete: Alice committed, Bob and Charlie rolled back.');
end;

