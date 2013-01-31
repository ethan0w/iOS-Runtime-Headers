/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, NSString, NSDictionary;

@interface CKMessageComposition : NSObject  {
}

@property(copy) NSString * subject;
@property(copy) NSString * markupString;
@property(retain) NSDictionary * resources;
@property(readonly) NSArray * messageParts;
@property(readonly) NSString * textString;
@property(readonly) BOOL hasNonwhiteSpaceContent;
@property(readonly) BOOL hasContent;
@property(readonly) BOOL isTextOnly;

+ (id)_createMessagePartFromResourceDictionary:(id)arg1 identifier:(id)arg2 relativeToPath:(id)arg3 version:(int)arg4;
+ (void)deleteFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)messageCompositionFromFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)newComposition;
+ (id)newCompositionForText:(id)arg1;

- (id)messageParts;
- (void)setResources:(id)arg1;
- (id)resources;
- (id)markupString;
- (void)writeToFileWithPrefix:(id)arg1 path:(id)arg2;
- (BOOL)hasNonwhiteSpaceContent;
- (void)setMarkupString:(id)arg1;
- (id)textString;
- (id)subject;
- (void)setSubject:(id)arg1;
- (BOOL)isTextOnly;
- (BOOL)hasContent;

@end
