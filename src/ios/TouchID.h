#import <Cordova/CDVPlugin.h>

@interface TouchID :CDVPlugin

- (void) isAvailable:(CDVInvokedUrlCommand*)command;

- (void) verifyFingerprint:(CDVInvokedUrlCommand*)command;
- (void) verifyFingerprintWithCustomPasswordFallback:(CDVInvokedUrlCommand*)command;
- (void) verifyFingerprintWithCustomPasswordFallbackAndEnterPasswordLabel:(CDVInvokedUrlCommand*)command;

- (void) invalidateFingerprint:(CDVInvokedUrlCommand*)command;

@end