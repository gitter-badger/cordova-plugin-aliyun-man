#import <Cordova/CDV.h>

@interface AliyunMan : CDVPlugin

- (void)initialize:(CDVInvokedUrlCommand*)command;

- (void)updateUserAccount:(CDVInvokedUrlCommand*)command;

- (void)userRegister:(CDVInvokedUrlCommand*)command;

- (void)pageHit:(CDVInvokedUrlCommand*)command;

- (void)customHit:(CDVInvokedUrlCommand*)command;

@end
