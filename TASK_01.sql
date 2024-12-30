use books;
create table customr (id int primary key,name varchar(50),email varchar(40),phone_number int not null,Address varchar(40));
describe customr;
insert into customr values(1,"Alices johnson","alice.johnson@example.com",987474551,"mainfl_springfied" ),(2,"bob smith","bob.smith@example.com",875421326,"shelbywilla"),(3,"charlie brown","charle.brown@example.com",812578471,"comenwilla");
select * from customr;
create table orders(orders_id int primary key,order_date date,order_amount int,customer_id int,FOREIGN KEY (customer_id) REFERENCES customr(id));
insert into orders values(1,"2024-12-01",250.75,1),(2,"2024-12-02",150.50,2),(3,"2024-12-03",300.00,1),(4,"2024-12-04",128.00,3);
select * from orders;
select customr.id,customr.name,customr.email,customr.phone_number,customr.Address from orders inner join customr on orders.customer_id=orders_id;
