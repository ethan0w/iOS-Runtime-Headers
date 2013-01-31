/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage  {
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}


- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (unsigned int)conferenceID;
- (BOOL)_checkSize:(unsigned long)arg1;
- (BOOL)_checkType:(unsigned short)arg1;
- (id)payload;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long)arg2;
- (unsigned int)subtype;

@end
