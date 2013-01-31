/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, EKParticipant;

@interface EKParticipantForSorting : NSObject  {
    EKParticipant *_participant;
    BOOL _isEmail;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}


- (BOOL)isEmail;
- (int)compare:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)displayName;
- (id)participant;
- (id)lastName;
- (id)firstName;
- (id)initWithEKParticipant:(id)arg1;

@end
