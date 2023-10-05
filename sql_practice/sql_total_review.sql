/*
Table 1: employees
Columns: employee_id (PK), first_name, last_name, email, phone_number, hire_date, job_id(FK), salary, commission_pct, manager_id(FK), department_id(FK)
​
Table 2: jobs
Columns: job_id (PK), job_title, min_salary, max_salary
​
Table 3: departments
Columns: department_id (PK), department_name, manager_id, location_id
*/
CREATE DATABASE final CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci;
USE final;

/*
참고) DECIMAL(M, D) 자료형
https://velog.io/@dlawogus/MySQL-DataTypes-DECIMAL
*/
DROP TABLE IF EXISTS employees;
-- create employees table
create table employees(
	employee_id int primary key not null auto_increment,
    first_name varchar(20) not null,
    last_name varchar(20) not null,
    email varchar(50) not null,
    phone_number varchar(20) not null,
    hire_date date not null,
    job_id int not null,
    salary decimal(8,2) not null,
    commission_pct decimal(3,2),
    manager_id int ,
    department_id int not null,
	foreign key (job_id) references jobs(job_id) on update cascade on delete cascade,
    foreign key (manager_id) references departments(manager_id) on update cascade on delete cascade,
    foreign key (department_id) references departments(department_id) on update cascade on delete cascade
);

INSERT INTO employees VALUES
  (1, 'John', 'Doe', 'johndoe@example.com', '555-1234', '2021-01-01', 1, 100000.00, 0.05, 3, 1),
  (2, 'Jane', 'Smith', 'janesmith@example.com', '555-5678', '2021-02-01', 2, 80000.00, NULL, 3, 1),
  (3, 'Bob', 'Johnson', 'bobjohnson@example.com', '555-9012', '2021-03-01', 1, 90000.00, 0.02, 5, 2),
  (4, 'Alice', 'Williams', 'alicewilliams@example.com', '555-3456', '2021-04-01', 3, 70000.00, NULL, 5, 2),
  (5, 'Mike', 'Brown', 'mikebrown@example.com', '555-7890', '2021-05-01', 4, 120000.00, 0.08, NULL, 3),
  (6, 'Sara', 'Lee', 'saralee@example.com', '555-2345', '2021-06-01', 4, 75000.00, NULL, 7, 4),
  (7, 'Tom', 'Jackson', 'tomjackson@example.com', '555-6789', '2021-07-01', 5, 110000.00, 0.03, NULL, 4),
  (8, 'Karen', 'Davis', 'karendavis@example.com', '555-1234', '2021-08-01', 5, 95000.00, NULL, 7, 4),
  (9, 'David', 'Miller', 'davidmiller@example.com', '555-5678', '2021-09-01', 2, 85000.00, NULL, 10, 5),
  (10, 'Lisa', 'Wilson', 'lisawilson@example.com', '555-9012', '2021-10-01', 1, 110000.00, 0.06, NULL, 5);
  
  select * from employees;
  
DROP TABLE IF EXISTS jobs;
-- create jobs table
create table jobs(
	job_id int primary key not null auto_increment,
    job_title varchar(50) not null,
    min_salary decimal(7,2) not null,
    max_salary decimal(8,2) not null
);

INSERT INTO jobs VALUES
  (1, 'Manager', 80000.00, 120000.00),
  (2, 'Developer', 60000.00, 100000.00),
  (3, 'Designer', 50000.00, 90000.00),
  (4, 'Salesperson', 40000.00, 80000.00),
  (5, 'Accountant', 50000.00, 100000.00);
  
select * from jobs;
  
DROP TABLE IF EXISTS departments;
-- create departments table
create table departments(
	department_id int primary key not null auto_increment,
    department_name varchar(50) not null,
    manager_id int unique,
    location_id varchar(30) not null
);

INSERT INTO departments VALUES
(1, 'Engineering', 3, 'New York'),
(2, 'Sales', 5, 'Los Angeles'),
(3, 'Marketing', 7, 'Chicago'),
(4, 'Accounting', 8, 'Houston'),
(5, 'IT', 10, 'San Francisco');

select * from departments;

-- < 실습 문제 >
-- 1. IT 부서에서 일하는 모든 직원을 반환하는 쿼리를 작성합니다.
select * from employees where department_id=(select department_id from departments where department_name='IT');

-- 2. 각 부서의 총 직원 수를 반환하는 쿼리를 작성합니다.
-- (department_id, num_employees)
select department_id, count(department_id) as 'num_employees' from employees group by department_id;

-- 3. $80,000 이상의 급여를 받는 모든 직원의 이름을 반환하는 쿼리를 작성합니다.
-- (first_name, last_name, salary)
select first_name, last_name from employees where salary>=80000;

-- 4. 영업부에서 근무하며 $50,000 이상의 급여를 받는 모든 직원의 이름과 급여를 반환하는 쿼리를 작성합니다.
-- (first_name, last_name, salary)
select first_name, last_name, salary from employees where department_id=(select department_id from departments where department_name='Sales') and salary>=50000;

-- 5. 직함과 직함별 평균 급여를 반환하는 조회를 작성합니다.
-- (job_id, avg_salary)
select job_id, avg(salary) as avg_salary from employees group by job_id;

-- 6. 모든 직원에 대한 직책과 최대 급여를 반환하는 조회를 작성합니다.
-- (job_title, max_salary)
select abc.job_title, max(salary) as max_salary from (select * from employees natural join jobs) as abc group by abc.job_title;

-- 7. 가장 높은 연봉을 받는 직원 상위 10명의 이름과 급여를 반환하는 쿼리를 작성합니다.
-- (first_name, last_name, salary)
select first_name, last_name, salary from employees order by salary desc limit 10;
-- 8. 최저임금을 받는 하위 5명의 직원들의 이름과 급여를 반환하는 쿼리를 작성하세요.
-- (first_name, last_name, salary)

select first_name, last_name, salary from employees order by salary limit 5;

-- 9. 관리자와 동일한 직함을 가진 모든 직원의 이름을 반환하는 쿼리를 작성합니다.
-- 직원(employee_id)과 상사/관리자(manager_id) 의 job_id 가 일치하는 sql문 작성해라 
-- 힌트) 셀프 조인!! 
-- (first_name, last_name)
select job_id from employees where manager_id is null;
select * from employees where manager_id is not null;
select first_name, last_name from employees right join (select job_id from employees where manager_id is null) as abc on abc.job_id=employees.job_id and employees.manager_id is not null;

-- 10. 2021년에 채용된 모든 직원의 이름을 반환하는 쿼리를 작성합니다.
-- (first_name, last_name, hire_date)
select first_name, last_name, hire_date from employees where hire_date like '2021%';

-- 11. 수수료를 받는 모든 직원의 이름과 급여를 반환하는 쿼리를 작성합니다.
-- (first_name, last_name, salary, commission_pct)
select first_name, last_name, salary, commission_pct from employees where commission_pct is not null;

-- 12. 수수료를 받지 않는 모든 직원의 이름과 급여를 반환하는 쿼리를 작성합니다.
-- (first_name, last_name, salary, commission_pct)
select first_name, last_name, salary, commission_pct from employees where commission_pct is null;

-- < 심화 >
-- 13. 관리자보다 먼저 고용된 모든 직원의 이름을 반환하는 쿼리를 작성합니다.
select hire_date from employees where manager_id is null;
select first_name, last_name from (select * from employees where manager_id is not null) as a left join on a.hire_date<=(select hire_date from employees where manager_id is null)

-- 14. 관리자보다 높은 수수료를 받는 직원의 이름과 급여를 반환하는 쿼리를 작성합니다.