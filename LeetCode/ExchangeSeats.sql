# Write your MySQL query statement below

SELECT
    s.id,
    s.student
FROM
    (
        SELECT
            id - 1 AS id,
            student
        FROM
            seat
        WHERE
            (id % 2 = 0)
        UNION
            SELECT
                (CASE WHEN (cnt%2=1) AND id=cnt THEN id ELSE id + 1 END) AS id,
                student
            FROM
                seat,
                (select count(*) as cnt from seat) as seatcnt
            WHERE
                (id % 2 = 1)
    ) s
GROUP BY
    s.id ASC