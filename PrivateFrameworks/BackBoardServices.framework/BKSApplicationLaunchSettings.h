/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSArray, NSString, NSDictionary;

@interface BKSApplicationLaunchSettings : NSObject <NSCopying, BKSXPCCoding> {
    NSDictionary *_environment;
    BOOL _waitForDebugger;
    BOOL _disableASLR;
    BOOL _checkForLeaks;
    NSArray *_arguments;
    NSString *_standardOut;
    NSString *_standardError;
}

@property(retain) NSDictionary * environment;
@property(retain) NSArray * arguments;
@property(copy) NSString * standardOut;
@property(copy) NSString * standardError;
@property BOOL waitForDebugger;
@property BOOL disableASLR;
@property BOOL checkForLeaks;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setStandardOut:(id)arg1;
- (void)setCheckForLeaks:(BOOL)arg1;
- (void)setDisableASLR:(BOOL)arg1;
- (void)setWaitForDebugger:(BOOL)arg1;
- (id)initWithSettings:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)standardOut;
- (BOOL)checkForLeaks;
- (BOOL)disableASLR;
- (BOOL)waitForDebugger;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)arguments;
- (id)environment;
- (void)setArguments:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (id)standardError;
- (void)setStandardError:(id)arg1;

@end
