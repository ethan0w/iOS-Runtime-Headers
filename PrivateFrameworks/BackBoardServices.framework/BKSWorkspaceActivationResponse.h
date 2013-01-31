/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSString;

@interface BKSWorkspaceActivationResponse : NSObject <NSCopying, BKSXPCCoding> {
    NSString *_bundleIdentifier;
    BOOL _willResume;
    BOOL _launchFailed;
}

@property(copy) NSString * bundleIdentifier;
@property BOOL willResume;
@property BOOL launchFailed;

+ (id)responseForWorkspaceUnsuspend:(id)arg1;
+ (id)responseForLaunchFailure:(id)arg1;

- (id)bundleIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setWillResume:(BOOL)arg1;
- (void)setLaunchFailed:(BOOL)arg1;
- (BOOL)launchFailed;
- (BOOL)willResume;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;

@end
