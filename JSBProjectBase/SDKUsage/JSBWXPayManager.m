//
//  JSBWXPayManager.m
//  JSBProjectBase
//
//  Created by WengHengcong on 16/1/20.
//  Copyright © 2016年 JungleSong. All rights reserved.
//

#import "JSBWXPayManager.h"

@implementation JSBWXPayManager


- (void)wxPayWithOrderStr:(PayReq *)payReq callback:(WxPayCallBack*)callBack {
    
    if (payReq != nil) {
    
        //发送请求到微信，等待微信返回onResp
        if ([WXApi sendReq:payReq]) {
            //日志输出
            NSLog(@"appid=%@\npartid=%@\nprepayid=%@\nnoncestr=%@\ntimestamp=%ld\npackage=%@\nsign=%@",@"appid",payReq.partnerId,payReq.prepayId,payReq.nonceStr,(long)payReq.timeStamp,payReq.package,payReq.sign );
            
        }else {
            NSLog(@"error");

        }
    }

}

@end
