import { Injectable } from '@nestjs/common';
import { UserDto } from './dto/user.dto';
import { UserRepository } from './entity/user.repository';

@Injectable() //의존 가능
export class UserService {
  constructor(
    private userRepository: UserRepository, 
  ){}

  signUp(request: UserDto): void {
      this.userRepository.signUp(request);
  }

  getInfo(id: string) { //js는 반환형을 자동으로 해줌. 명시하기 위해서 적어주는 것
      return this.userRepository.findById(id);
  }

}