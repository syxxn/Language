import { Column, Entity, PrimaryColumn, PrimaryGeneratedColumn } from "typeorm";

@Entity()
export class User {

    @PrimaryColumn() //@PrimaryGeneratedColumn는 id + AI라서 자료형을 따로 설정해줘도 number 자료형으로 들어감. id 설정만 해주고 싶을 때는 @PrimaryColumn
    id: string;

    @Column()
    password: string;

    @Column()
    name: string;

}