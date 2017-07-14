/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPOBHSequenceRecord : _DPOBHRecord {
    NSString * _plainSequence;
    long long  _sequenceBitPosition;
    BOOL  _sequenceBitValue;
}

@property (nonatomic, retain) NSString *plainSequence;
@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) BOOL sequenceBitValue;

+ (id)entityName;
+ (id)recordWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(BOOL)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7;

- (void).cxx_destruct;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)description;
- (id)initWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(BOOL)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7;
- (id)jsonString;
- (id)plainSequence;
- (long long)sequenceBitPosition;
- (BOOL)sequenceBitValue;
- (void)setPlainSequence:(id)arg1;
- (void)setSequenceBitPosition:(long long)arg1;
- (void)setSequenceBitValue:(BOOL)arg1;

@end
