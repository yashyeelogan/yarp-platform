
bases="exp_0004/seq_0000 exp_0006/seq_0000 exp_0004/seq_0000"

# 4 6 8

for b in $bases; do
    base="/mnt/contact_cache/$b"


    for f in `cd $base; ls *cc.dv`; do
	./track_mouth --file config2.ini --source $base/$f || exit 1
	n=`basename $f .dv`
	#cp movie.avi $base/$n.avi
    done

done
