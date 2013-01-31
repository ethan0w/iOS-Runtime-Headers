/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {
    NSData *_data;
    BOOL _complete;
    BOOL _partial;
    NSString *_partName;
}

@property(getter=isPartial) BOOL partial;
@property(getter=isComplete) BOOL complete;
@property(retain) NSData * data;
@property(retain) NSString * partName;


- (id)data;
- (void)dealloc;
- (void)setPartName:(id)arg1;
- (void)setPartial:(BOOL)arg1;
- (BOOL)isComplete;
- (id)partName;
- (BOOL)isPartial;
- (void)setComplete:(BOOL)arg1;
- (void)setData:(id)arg1;

@end
