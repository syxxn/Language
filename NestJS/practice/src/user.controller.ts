import { Body, Controller, Get, Param, Post } from "@nestjs/common";
import { UserDto } from "./dto/user.dto";
import { UserService } from "./user.service";

@Controller('user')
export class UserController {
    constructor(private readonly userService: UserService) {}

    @Post('signup')
    signUp(@Body() request: UserDto): void {
        this.userService.signUp(request);
    }

    @Get(':id')
    getInfo(@Param('id') id: string) {
        return this.userService.getInfo(id);
    }

}