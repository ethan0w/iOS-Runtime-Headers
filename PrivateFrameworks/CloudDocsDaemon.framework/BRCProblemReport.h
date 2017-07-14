/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCProblemReport : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _needsSyncUp;
    NSNumber * _pendingRequestID;
    NSMutableDictionary * _problems;
    int  _state;
}

@property (nonatomic, readonly) NSSet *effectedRecordNames;
@property (nonatomic, readonly) NSString *effectiveProblemMessage;
@property (nonatomic) BOOL needsSyncUp;
@property (nonatomic, retain) NSNumber *pendingRequestID;
@property (nonatomic, readonly) int state;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addProblem:(id)arg1;
- (int)_effectiveProblemType;
- (int)_priorityForProblemType:(int)arg1;
- (int)_zoneStateForProblemType:(int)arg1;
- (void)addProblemWithType:(int)arg1 recordName:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectedRecordNames;
- (id)effectiveProblemMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProblemReport:(id)arg1;
- (BOOL)needsSyncUp;
- (id)pendingRequestID;
- (void)setNeedsSyncUp:(BOOL)arg1;
- (void)setPendingRequestID:(id)arg1;
- (int)state;

@end
