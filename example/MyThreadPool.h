//
// Created by xueyuegui on 19-8-25.
//

#ifndef MYWEBRTC_MYTHREADPOOL_H
#define MYWEBRTC_MYTHREADPOOL_H

#include "thread/ThreadPool.h"


class MyThreadPool {
public:
    static MyThreadPool& GetInstance(){
        static MyThreadPool instance;
        return instance;
    }
    void Start(int nPhtreadNum){
        workerPool = std::make_shared<erizo::ThreadPool>(nPhtreadNum);
        workerPool->start();
    }
    std::shared_ptr<erizo::ThreadPool> GetThreadPool(){return workerPool;}


private:
    MyThreadPool(){

    }
    std::shared_ptr<erizo::ThreadPool> workerPool;

};


#endif //MYWEBRTC_MYTHREADPOOL_H
