--- CRIAR TABELA EMPREGADO
create table EMP (
        empno   NUMBER  	constraint pk_emp primary key,
        ename   VARCHAR2(10) constraint  nn_ename NOT NULL constraint upper_name
  			   CHECK (ename = UPPER(ename)),
	job	VARCHAR2(9),
	mgr	NUMBER	   constraint fk_mgr references EMP(empno),
	hiredate date	   default (sysdate),
	sal	NUMBER(10,2) constraint ck_sal CHECK (sal > 500),
	comm	NUMBER(9,0)  default null,
	deptno	NUMBER(2)    );

ALTER TABLE EMP MODIFY JOB VARCHAR(30);
