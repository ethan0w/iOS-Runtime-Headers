/* Generated by RuntimeBrowser.
 */

@protocol MDLMeshBuffer <NSObject, NSCopying>

@required

- (<MDLMeshBufferAllocator> *)allocator;
- (void)fillData:(NSData *)arg1 offset:(unsigned int)arg2;
- (unsigned int)length;
- (MDLMeshBufferMap *)map;
- (unsigned int)type;
- (<MDLMeshBufferZone> *)zone;

@end
