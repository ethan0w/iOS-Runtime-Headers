/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * image;
@property(copy) NSString * text;

+ (id)objectLineWithDictionary:(id)arg1 context:(id)arg2;
+ (id)objectLine;

- (id)encodedClassName;
- (id)image;
- (id)text;
- (void)setText:(id)arg1;
- (void)setImage:(id)arg1;
- (id)groupIdentifier;

@end
