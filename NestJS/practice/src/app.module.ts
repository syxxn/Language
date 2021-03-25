import { Module } from '@nestjs/common';
import { TypeOrmModule } from '@nestjs/typeorm';
import { AppController } from './app.controller';
import { AppService } from './app.service';
import { User } from './entity/user.entity';
import { UserRepository } from './entity/user.repository';
import { UserController } from './user.controller';
import { UserService } from './user.service';

@Module({
  imports: [
    TypeOrmModule.forRoot({
      type: 'mysql', //npm install --save @nestjs/typeorm typeorm mysql2 //mysql이랑 연결하려면 프로젝트마다 설치해줘야 함.
      host: 'localhost',
      port: 3306,
      username: 'root',
      password: 'dltmddbs',
      database: 'nest_js',
      entities: [User],
      synchronize: true, //동기화. 협업할 때는 주의하는 것이 좋음
    }), //왜 마지막을 쉼표로 끝내는지 모르겠음
    TypeOrmModule.forFeature([UserRepository]),
  ],
  controllers: [AppController, UserController],
  providers: [AppService, UserService],
})
export class AppModule {}
