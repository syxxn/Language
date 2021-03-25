import { UserDto } from "src/dto/user.dto";
import { EntityRepository, Repository } from "typeorm";
import { User } from "./user.entity";

@EntityRepository(User) // @EntityRepository(엔티티명)
export class UserRepository extends Repository<User> { // Repository<엔티티명> 상속
    private newUser: User; // 더 안전하게 저장하기 위해서 객체를 만들어 줌(왜 더 안전한건지 모르겠음)나도

    signUp(request: UserDto) { //signUp 
        this.newUser = this.create(request);
        this.save(this.newUser);
    }

    async findById(id: string) { // async/await는 비동기 코드의 겉모습과 동작을 좀 더 동기 코드와 유사하게 만들어 준다. non-blocking
        this.newUser = await this.findOne({id});
        return {
            userName: this.newUser.name, //이런 식으로 작성하면 json으로 값을 보낼 수 있음
            password: this.newUser.password,
        }
    }

}