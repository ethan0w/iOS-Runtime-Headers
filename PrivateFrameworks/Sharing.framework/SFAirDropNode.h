/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropNode : NSObject {
    BOOL  _classroom;
    BOOL  _classroomCourse;
    BOOL  _classroomGroup;
    NSString * _contactIdentifier;
    UIImage * _displayIcon;
    NSString * _displayName;
    BOOL  _me;
    BOOL  _monogram;
    id  _node;
    NSString * _realName;
    NSString * _secondaryName;
    struct __SFOperation { } * _sender;
    BOOL  _supportsFMF;
    BOOL  _supportsMixedTypes;
    BOOL  _supportsPasses;
    BOOL  _unknown;
}

@property (getter=isClassroom) BOOL classroom;
@property (getter=isClassroomCourse) BOOL classroomCourse;
@property (getter=isclassroomGroup) BOOL classroomGroup;
@property (retain) NSString *contactIdentifier;
@property (retain) UIImage *displayIcon;
@property (retain) NSString *displayName;
@property (getter=isMe) BOOL me;
@property (getter=isMonogram) BOOL monogram;
@property (retain) id node;
@property (retain) NSString *realName;
@property (retain) NSString *secondaryName;
@property (readonly) BOOL supportsFMF;
@property (readonly) BOOL supportsMixedTypes;
@property (readonly) BOOL supportsPasses;
@property (getter=isUnknown) BOOL unknown;

+ (id)nodeWithSFNode:(struct __SFNode { }*)arg1;

- (void).cxx_destruct;
- (void)cancelSend;
- (id)contactIdentifier;
- (id)description;
- (id)displayIcon;
- (id)displayName;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long)arg2 withResults:(id)arg3;
- (unsigned int)hash;
- (id)init;
- (BOOL)isClassroom;
- (BOOL)isClassroomCourse;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMe;
- (BOOL)isMonogram;
- (BOOL)isUnknown;
- (BOOL)isclassroomGroup;
- (id)node;
- (id)realName;
- (id)secondaryName;
- (void)setClassroom:(BOOL)arg1;
- (void)setClassroomCourse:(BOOL)arg1;
- (void)setClassroomGroup:(BOOL)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDisplayIcon:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setMe:(BOOL)arg1;
- (void)setMonogram:(BOOL)arg1;
- (void)setNode:(id)arg1;
- (void)setRealName:(id)arg1;
- (void)setSecondaryName:(id)arg1;
- (void)setUnknown:(BOOL)arg1;
- (void)simulateFakeTransferWithSessionID:(id)arg1;
- (void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)supportsFMF;
- (BOOL)supportsMixedTypes;
- (BOOL)supportsPasses;
- (void)updateWithSFNode:(struct __SFNode { }*)arg1;

@end
