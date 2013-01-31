/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSURL, NSString, EKObjectID;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {
    int _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSURL *_URI;
    EKObjectID *_objectID;
    struct CGColor { } *_dotColor;
    BOOL _hiddenFromNotificationCenter;
    BOOL _alerted;
}

@property int type;
@property(retain) NSString * title;
@property(retain) NSString * name;
@property(retain) NSString * emailAddress;
@property(retain) NSURL * URI;
@property(retain) EKObjectID * objectID;
@property struct CGColor { }* dotColor;
@property BOOL hiddenFromNotificationCenter;
@property BOOL alerted;
@property(readonly) BOOL needsAlert;


- (void)setName:(id)arg1;
- (id)name;
- (int)type;
- (void)dealloc;
- (void)setURI:(id)arg1;
- (id)URI;
- (id)emailAddress;
- (id)title;
- (id)initWithType:(int)arg1;
- (void)setType:(int)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)hiddenFromNotificationCenter;
- (struct CGColor { }*)dotColor;
- (BOOL)needsAlert;
- (void)setAlerted:(BOOL)arg1;
- (void)setDotColor:(struct CGColor { }*)arg1;
- (void)setHiddenFromNotificationCenter:(BOOL)arg1;
- (BOOL)alerted;
- (void)setEmailAddress:(id)arg1;
- (void)setObjectID:(id)arg1;
- (id)objectID;

@end
