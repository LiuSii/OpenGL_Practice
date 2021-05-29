////
//for (unsigned int i = 0; i < 2; i++) {
//    //std::cout << sin((float)glfwGetTime()) * 10.0 << "----" << cos((float)glfwGetTime()) * 10.0 << "\n" ;
//    //glm::translate(model2, glm::vec3(sin((float)glfwGetTime()) * 10.0, 0.0f, cos((float)glfwGetTime()) * 10.0));
//
//    glm::mat4 model = glm::mat4(1.0f);
//    model = glm::translate(model, cubePositions[i]);
//    if (i == 0) {
//        model = glm::rotate(model, (float)glfwGetTime(), glm::vec3(0.0f, 1.0f, 0.0f));
//    } else {
//        model = glm::translate(model, glm::vec3(sin((float)glfwGetTime()) * 5.0, 0.0f, cos((float)glfwGetTime()) * 5.0));
//    }
//    ourShader.setMat4("model", model);
//
//    glDrawArrays(GL_TRIANGLES, 0, 36);
//}